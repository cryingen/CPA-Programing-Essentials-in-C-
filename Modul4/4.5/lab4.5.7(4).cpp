#include <iostream>
#include <string>
#include <algorithm>


bool is_anagram(std::string s1, std::string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}
int main(void) {
    std::string s1,s2;
    std::cout << "Input 2 words and we will check either it an anagrams or not..." << std::endl;
    getline(std::cin, s1);
    getline(std::cin, s2);
    std::cout << (is_anagram(s1, s2) ? "amagrams" : "not anagrams") << std::endl;
	return 0;
}
