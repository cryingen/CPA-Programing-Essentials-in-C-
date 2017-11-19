#include <iostream>
#include <string>
 
int main(void) { 
    std::string str;
    std::cout << "Input thestd::string please: " << std::endl;
    getline(std::cin, str);
    int *arr = new int[26];
    int inx;
    if(str[0] >= 65 && str[0] <= 90)
        arr[(str[0] + 32) % 97]++;
    for(int i = 0; i < str.size(); i++)
    {
    	inx = str[i] % 97;
       	arr[inx]++;
    }
    bool isPangram = true;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] == 0)
        {
        	isPangram = false;
        	std::cout << "Not pangram\n";
        	break;
        }
    }
    if(isPangram)
	std::cout << "Pangram\n";
    for(int i = 0; i < 26; i++)
        std::cout << (char)(i + 97) << " - " << arr[i] << std::endl;
    delete[] arr;
    return 0;
}