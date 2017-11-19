#include <string>
#include <iostream>

int main() {
    std::cout << "Input the password, please.It must:" << std::endl;
    std::cout << "  - be eight characters long;" << std::endl;
    std::cout << "  - have at least one upper-case letter;" << std::endl;
    std::cout << "  - have at least one lower-case letter;" << std::endl;
    std::cout << "  - have at least one digit;" << std::endl;
    std::cout << "  - have at least one special character." << std::endl;
    std::string password;
    getline(std::cin, password); 
    int length = 0, lcletter = 0, ucletter = 0, digit = 0, specchar = 0, comp;
    if(password.length() >= 8)
        length = 1;
    for (int i = 0; i < password.length(); i++)
    {
        comp = password.substr(i, 1).compare("A");
        if((comp >= 0) && (comp <= 25))
            ucletter++;
        else if((comp >= -17) && (comp <= -8))
            digit++;
        else
        {
            comp = password.substr(i, 1).compare("a");
            if ((comp >= 0) && (comp <= 25))
                lcletter++;
            else
                specchar++;
        }
    }
    if(length == 0)
        std::cout << "The password must be min 8 characters long" << std::endl;
    if(ucletter == 0)
        std::cout << "The password must have at least one upper case letter" << std::endl;
    if(digit == 0)
        std::cout << "The password must have at least one digit" << std::endl;
    if(lcletter == 0)
        std::cout << "The password must have at least one lower case letter" << std::endl;
    if(specchar == 0)
        std::cout << "The password must have at least one special character" << std::endl;
    if(length * ucletter * digit * lcletter * specchar != 0)
        std::cout << "Password is valid" << std::endl;
    return 0;
    }