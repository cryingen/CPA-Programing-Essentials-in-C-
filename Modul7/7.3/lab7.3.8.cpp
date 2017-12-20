#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
using namespace std;

void checkIP(string ip) throw (invalid_argument)
{
	string mess = "";
	int dotindx = 0, k = 0;//next dot and current dot indexes
	string part[4];
	for (int i = 0; i < sizeof(part) / sizeof(part[0]); i++)//split input ip on parts
	{
		if (dotindx == string::npos)
			throw invalid_argument("Incorrect IP.Incorrect parts count");
		dotindx = ip.find(".", k);
		part[i] = ip.substr(k, dotindx - k);
		k = dotindx + 1;
		if (part[i].length() > 3)
			throw invalid_argument("Incorrect IP.Too many characters in a part");
		if (atof(part[i].c_str()) > 255)
			throw invalid_argument("Incorrect IP.Too big a value of a part");
		if (i == 3 && dotindx != string::npos)
			throw invalid_argument("Incorrect IP.Too many parts");
		if (atof(part[i].c_str()) == 0 && part[i].length() > 1 || part[i].empty())
			throw invalid_argument("Incorrect IP");
	}
	for (int j = 0; j < ip.length(); j++)
		if ((ip[j] != '.') && !(((ip[j] - 'A') >= -17) && ((ip[j] - 'A') <= -8)))
			throw invalid_argument("Incorrect IP.Only digits and dots allowed");
}

string ConvertToBinary(int n)
{
	string res = "", temp;
	for (int i = n; 1 <= i; i /= 2)
	{
		temp = to_string(i % 2);
		temp.append(res);
		res = temp;
	}
	while (res.length() != 8)
	{
		temp = ("0");
		temp.append(res);
		res = temp;
	}
	return res;
}

string BinaryToInt(string bin)
{
	int res = 0, temp = 1;
	for (int i = 0; i < bin.length(); i++)
		if (atof((bin.substr(i, 1)).c_str()) == 1)
		{
			for (int j = 1; j < bin.length() - i; j++)
				temp *= 2;
			res += temp;
			temp = 1;
		}
	return to_string(res);
}



string calculateMask(string ip, int mask)
{
	string binpart[4], res,temp;
	int part[4];
	int dotindx = 0, k = 0, partindx = mask / 8;
	for (int i = 0; i < sizeof(part) / sizeof(part[0]); i++)//split input ip on parts
	{
		dotindx = ip.find(".", k);
		part[i] = atof(ip.substr(k, dotindx - k).c_str());
		binpart[i] = ConvertToBinary(part[i]);
		k = dotindx + 1;
	}
	for (int i = mask % 8; i < 8; i++)
		binpart[partindx][i] = '0';
	while (partindx != 3)
	{
		binpart[partindx + 1] = "00000000";
		partindx++;
	}
	for (int i = 0; i < sizeof(binpart) / sizeof(binpart[0]); i++)//split input ip on parts
	{
		res.append(BinaryToInt(binpart[i]));
		if (i!= sizeof(binpart) / sizeof(binpart[0]) - 1)
			res.append(".");
	}
	return res;
}

int main(void)
{
	int mask;
	string ip, input;
	getline(cin, input);
	ip = input.substr(0, input.find(" "));
	try
	{
		mask = atof(input.substr(input.find(' '), input.length() - 1).c_str());
		checkIP(ip);
		if (mask <= 0 || mask >= 32)
			throw invalid_argument("Invalid mask");
		cout << calculateMask(ip, mask) << endl;
	}
	catch (invalid_argument e)
	{
		cout << e.what() << endl;
	}
	return 0;
}
