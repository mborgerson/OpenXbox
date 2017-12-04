#include "mem.h"

/*!
 * Constructor
 */
MemoryRegion::MemoryRegion(enum MemoryRegionType type, uint32_t start, size_t size, void *data)
{
    m_parent = NULL;
    m_type = type;
    m_start = start;
    m_size = size;
    m_data = data;
    m_handler = NULL;
    m_handler_user = NULL;
}

/*!
 * Given a relative offset, determine the absolute offset based on parents
 */
uint32_t MemoryRegion::GetAbsoluteAddress(uint32_t offset)
{
    uint32_t addr = m_start;

    for (MemoryRegion *p = m_parent; p != NULL; p = p->m_parent) {
        addr += p->m_start;
    }

    return addr + offset;
}

/*!
 * Set the parent of this region
 */
void MemoryRegion::SetParent(MemoryRegion *parent)
{
    m_parent = parent;
}

/*!
 * Set the MMIO event handler for this region
 */
void MemoryRegion::SetEventHandler(MemoryRegionEventHandler handler, void *user_data)
{
    m_handler = handler;
    m_handler_user = user_data;
}

/*!
 * Add a subregion to this region
 */
int MemoryRegion::AddSubRegion(MemoryRegion *region)
{
    m_subregions.push_back(region);
    region->SetParent(this);
    return 0;
}
