#include <iostream>
#include <string>
#include <vector>

bool StrToInt(const std::string& str, int& result)
{
    std::string::const_iterator i = str.begin();
    if (i == str.end())
        return false;
    bool negative = false;
    if (*i == '-')
    {
        negative = true;
        ++i;
        if (i == str.end())
            return false;
    }
    result = 0;
    for (; i != str.end(); ++i)
    {
        if (*i < '0' || *i > '9')
            return false;
        result *= 10;
        result += *i - '0';
    }
    if (negative)
        result = -result;
    return true;
}
int main(void) {
    std::string s;
    std::cout << "Input IP please(format: 1.9.3.5)" << std::endl;
    getline(std::cin,s);
    std::vector<std::string> parts = std::vector<std::string>();
    std::string temp;
    int a = 0;
    while (s.find_first_of('.') != std::string::npos)
    {
        temp = s.substr(0, s.find_first_of("."));
        if (temp.length() > 3)
        {
            std::cout << "Too many characters in a part";
            return 0;
        }
        if (!StrToInt(temp, a))
        {
            std::cout << "Only digits and dots allowed";
            return 0;
        }
        parts.push_back(temp);
        s = s.substr(s.find_first_of(".") + 1);
    }
    parts.push_back(s);
    if(parts.size() != 4)
    {
		std::cout << "Incorrect parts count.";
		return 0;
	}
	for (int i = 0; i < parts.size(); i++)
    {
        StrToInt(parts[i], a);
        if(a > 255)
        {
            std::cout << "Too big a value of a part";
            return 0;
        }
    }
    std::cout << "Correct IP";
	return 0;
}
