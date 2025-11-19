#include "../include/HsvToCsvAdapter.hpp"

std::string HsvToCsvAdapter::GetCsv() {
    std::string val = m_vendorHsv.GetHsv();
    for (auto &c : val)
        c = (c == '-' ? ',' : c);
    return val;
}

HsvToCsvAdapter::HsvToCsvAdapter(const VendorHsv &vendorHsv)
    : m_vendorHsv(vendorHsv)  {}
