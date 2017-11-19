#include <iostream>
int main(void) {
    float grossprice, taxrate, netprice, taxvalue;
    std::cout << "Enter a gross price(it must be > 0): ";
    std::cin >> grossprice;
    while(grossprice < 0)
    {
        std::cout << "The value's wrong.It must be > 0.Please enter one more time" << std::endl;
        std::cin >> grossprice;
    }
    std::cout << "Enter a tax rate in %(it must be > 0 and < 100) :";
    std::cin >> taxrate;
    while((taxrate < 0) || (taxrate > 100))
    {
        std::cout << "The value's wrong.It must be > 0 and < 100.Please enter one more time" << std::endl;
        std::cin >> taxrate;
    }
    netprice = grossprice / (1 + taxrate / 100);
    taxvalue = grossprice - netprice;
    
    std::cout << "Net price: " << netprice << std::endl;
    std::cout << "Tax value: " << taxvalue << std::endl;
    return 0;
    }