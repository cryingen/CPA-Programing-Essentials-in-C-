#include <iostream>
#include <string>

int main()
{
   std::string text, from, to;
    std::cout << "Input original text: ";
    getline(std::cin, text);
    std::cout << "Input the word you want to replace: ";
    getline(std::cin, from);
    std::cout << "Input the wrod you want to replace with: ";
    getline(std::cin, to);
    int pos = text.find(from);
    while (pos != -1)
    { 
        text.replace(pos, from.size(), to);
        pos = text.find(from);
    }
    std::cout << text << std::endl;
    return 0;
}