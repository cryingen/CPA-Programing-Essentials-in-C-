#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string> ip_table {"127.0.0.1", "192.168.0.1", "192.168.1.100", "255.255.255.255" };
	int size = 0;
	cin >> size;
	if (size > ip_table.size() || size <= 0)
	{
		cout << "Too big - value must be smaller than or equal to vector size." << endl;
		return 0;
	}
	vector <string> o(ip_table.begin(),ip_table.begin()+size);
	for (string ou : o)
		cout << ou << " ";
	cout << endl;
	return 0;
}
