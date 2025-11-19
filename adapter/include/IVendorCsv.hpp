#pragma once

#include <string>

/* Abstract class for a vendor
 * to return Comma separated values
 */
class IVendorCsv {
    public:
        virtual std::string GetCsv() = 0;
};
