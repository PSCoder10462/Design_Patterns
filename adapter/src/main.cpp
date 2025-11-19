#include "../include/HsvToCsvAdapter.hpp"
#include <iostream>

void client(IVendorCsv *vendorCsv) {
    std::cout
        << "Client here:\nI can only deal with the comma separated values\n";
    std::cout << "Value received: " << vendorCsv->GetCsv() << '\n';
}


int main() {
    VendorHsv vendorHsv;
    std::cout << "Value from vendorHsv: " << vendorHsv.GetHsv();
    std::cout << '\n';

    HsvToCsvAdapter hsvToCsvAdapter(vendorHsv);
    client(&hsvToCsvAdapter);
    return 0;
}
