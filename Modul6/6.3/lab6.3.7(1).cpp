#include <iostream>
#include <string>
using namespace std;
class IPAddress
{
public:
	IPAddress() { ipadd = "0.0.0.0"; }
	IPAddress(string ipadd);
	void printIp();
protected:
	string ipadd;
};
IPAddress::IPAddress(string ipadd)
{
	this->ipadd = ipadd;
}
void IPAddress::printIp()
{
	cout << "Setted IP is: " << ipadd << endl;
}

class IPAddressChecked : public IPAddress
{
public:
	IPAddressChecked() : IPAddress() { };
	bool CheckIP(string ip);
	bool SetIp(string ipadd);
};

bool IPAddressChecked::SetIp(string ip)
{
	if (!CheckIP(ip))
		return false;
	this->ipadd = ip;
	return true;
}

bool IPAddressChecked::CheckIP(string ip)
{
	std::string mess = "", part[4];
	int dotindx = 0, k = 0;//next dot and current dot indexes
	for (int i = 0; i < sizeof(part) / sizeof(part[0]); i++)//split input ip on parts
	{
		if (dotindx == std::string::npos)
			return false;
		dotindx = ip.find(".", k);
		part[i] = ip.substr(k, dotindx - k);
		k = dotindx + 1;
		if (part[i].length() > 3 || atof(part[i].c_str()) > 255)
			return false;
		if (i == 3 && dotindx != std::string::npos)
			return false;
		if (atof(part[i].c_str()) == 0 && part[i].length() > 1 || part[i].empty())
			return false;
	}
	for (int j = 0; j < ip.length(); j++)
		if ((ip[j] != '.') && !(((ip[j] - 'A') >= -17) && ((ip[j] - 'A') <= -8)))
			return false;
	return true;
}

int main(void) {
	cout << "Input IP address you DON'T want to check" << endl;
	string ip, ipch;
	getline(cin, ip);
	IPAddress ad(ip);
	IPAddressChecked adch;
	ad.printIp();
	cout << "Input IP address you want to check" << endl;
	getline(cin, ipch);
	string result = (adch.SetIp(ipch)) ? "" : "in";
	cout << "The IP is " + result + "correct" << endl;
	adch.printIp();
	return 0;
}
