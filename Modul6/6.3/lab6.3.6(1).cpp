#include <iostream>
using namespace std;
class Piece
{
public:
	virtual bool Check(char endPointC, int endPointI) { return true; }
};
class Man : public Piece
{
public:
	bool Check(char endPointC, int endPointI)
	{
		char start = 'b';
		int startn = 1;
		return ((endPointC - start) == 1) && ((endPointI - startn) == 1);
	}
};
class King : public Piece
{
public:
	bool Check(char endPointC, int endPointI)
	{
		char start = 'b';
		int startn = 1;
		return ((endPointC - start) <= 6) && ((endPointI - startn) <= 6);
	}
};
int main()
{
	Man *man = new Man();
	King *king = new King();
	if (static_cast<Piece *>(man)->Check('c', 2))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (static_cast<Piece *>(king)->Check('e', 3))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (static_cast<Piece *>(man)->Check('d', 3))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}

