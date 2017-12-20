#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector <int> values{ 10,20,50,100,200 };
	vector <int> amount{ 5,6,3,4,5 };
	int a, b;
	bool en = false;
	string res;
	cin >> a;
	cin >> b;
	if (a % 10 != 0)
		cout << "Incorrect amount of money" << endl;
	else
	{
		for (unsigned i = 0; i < values.size(); ++i)
			if (a / values[i] < amount[i])
			{
				en = true;
				break;
			}
		res = (en == true) ? "Enough money" : "Not enough money";
		cout << res << endl;
	}
	en = false;
	if (b % 10 != 0)
		cout << "Incorrect amount of money" << endl;
	else
	{
		for (unsigned i = 0; i < values.size(); ++i)
			if (b / values[i] < amount[i])
			{
				en = true;
				break;
			}
		res = (en == true) ? "Enough money" : "Not enough money";
		cout << res << endl;
	}
	return 0;
}
