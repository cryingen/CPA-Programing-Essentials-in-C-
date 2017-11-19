#include <iostream>

int main(void) {
    int vector[] = {1, 7, 3, 8, 3, 7, 1};
    bool ispalindrome = true;
    int n = sizeof(vector) / sizeof(vector[0]);
    for(int i = 0; i < n ; i++)
    {
        if(vector[n - 1 - i] != vector[i])
        {
            ispalindrome = false;
            break;
        }
    }
    if(ispalindrome)
        std::cout << "It's a palindrome";
    else
         std::cout << "It isn't a palindrome";
    return 0;
    }