#include <iostream>

int main()
{   
    int value;
    int bitarray[16];
    bool result = true;
    std::cout << "Input decimal value: ";
    std::cin >> value;
    std::cout << "This value in binary: ";
    for(int i = 0; i < 16; i++)
    {
        bitarray[15 - i] = value % 2;
        std::cout << bitarray[15 - i];
        value /= 2;
    }
    for(int i = 0; i < 16; i++)
    {
        if(bitarray[15 - i] != bitarray[i])
        {
            result = false;
            break;
        }
    }
    if(result)
        std::cout << " is a bitwise palindrome";
    else
        std::cout << " isn't a bitwise palindrome";
    return 0;
}