#include <iostream>
#include <string>

std::string checkIP(std::string ip)
{
	std::string mess = "";
	int dotindx = 0, k = 0;//next dot and current dot indexes
	std::string part[4];
	for (int i = 0; i < sizeof(part) / sizeof(part[0]); i++)//split input ip on parts
	{
		if (dotindx == std::string::npos)
			return "Incorrect parts count";
		dotindx = ip.find(".", k);
		part[i] = ip.substr(k, dotindx - k);
		k = dotindx + 1;
		if (part[i].length() > 3)
			return "Too many characters in a part";
		if (atof(part[i].c_str()) > 255)
			return "Too big a value of a part";
		if (i == 3 && dotindx != std::string::npos)
			return "Too many parts";
		if (atof(part[i].c_str()) == 0 && part[i].length() > 1 || part[i].empty())
			return "Incorrect IP";
	}
	for (int j = 0; j < ip.length(); j++)
		if ((ip[j] != '.') && !(((ip[j] - 'A') >= -17) && ((ip[j] - 'A') <= -8)))
			return "Only digits and dots allowed";
	return "Correct IP";
}

int main()
{
	std::cout << "Input IP address(format 1.2.3.4)" << std::endl;
	std::string input;
	getline(std::cin, input);
	while (!input.empty())
	{
		std::cout << checkIP(input) << std::endl;
		getline(std::cin, input);
	};
	return 0;
}