#include <iostream>
#include <string>
using namespace std;
class IPAddress
{
public:
	IPAddress() { ipadd = "0.0.0.0"; }
	IPAddress(string ipadd);
	void printIP();
protected:
	string ipadd;
};
IPAddress::IPAddress(string ipadd)
{
	this->ipadd = ipadd;
}
void IPAddress::printIP()
{
	cout << ipadd << endl;
}

class IPAddressChecked : public IPAddress
{
public:
	IPAddressChecked() : IPAddress() { };
	bool CheckIP(string ip);
	bool SetIP(string ip);
};

bool IPAddressChecked::SetIP(string ip)
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

class Network
{
public:
	Network(IPAddressChecked ad[3]);
	void PrintNetwork();
private:
	IPAddressChecked ip[3];
};
void Network::PrintNetwork()
{
	for (int i = 0; i < sizeof(ip) / sizeof(ip[0]); i++)
		ip[i].printIP();
}

Network::Network(IPAddressChecked ad[3])
{
	for (int i = 0; i < sizeof(ip) / sizeof(ip[0]); i++)
		ip[i] = ad[i];
}

int main(void) {
	cout << "Input IP 5 addresses" << endl;
	string a[5];
	IPAddressChecked ad1[3], ad2[3];
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		getline(cin, a[i]);
	for (int i = 0; i < sizeof(ad1) / sizeof(ad1[0]); i++)
		ad1[i].SetIP(a[i]);
	for (int i = 0; i < sizeof(ad1) / sizeof(ad1[0]); i++)
		ad2[i].SetIP(a[i+2]);
	Network n1(ad1), n2(ad2);
	cout << "Network 1" << endl;
	n1.PrintNetwork();
	cout << "Network 2" << endl;
	n2.PrintNetwork();
}
