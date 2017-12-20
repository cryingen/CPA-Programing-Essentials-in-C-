#include <vector>
#include <iostream>

using namespace std;
int main()
{
	vector <float> v(5);
	float number, sum = 0, avg = 0;
	cin >> number;
	v[0] = number;
	v[1] = number + 5;
	v[2] = number + 0.5;
	v[3] = number + 2.3;
	v[4] = number + 4.7;
	for (unsigned i = 0; i < v.size(); ++i)
	{
		sum+=v[i];
	}
	avg = sum/v.size();
	cout << "sum : " << sum << " avg: " << avg << endl;
	return 0;
}