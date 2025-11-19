#pragma once

#include "IVendorCsv.hpp"
#include "VendorHsv.hpp"

class HsvToCsvAdapter : public IVendorCsv {
  public:
    std::string GetCsv() override;
    HsvToCsvAdapter(const VendorHsv &);

  private:
    VendorHsv m_vendorHsv;
};
