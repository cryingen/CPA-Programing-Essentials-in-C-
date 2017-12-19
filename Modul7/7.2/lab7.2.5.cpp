#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
using namespace std;
class invalid_amoutof_elem : public logic_error
{
public:
	explicit invalid_amoutof_elem(const string& a) : logic_error(a) {};
};

class invalid_matric_size : public logic_error
{
public:
	explicit invalid_matric_size(const string& a) : logic_error(a) {};
};


class Matric
{
public:
	Matric() {};
	Matric(int row, int col);
	int Row() { return row; };
	int Col() { return col; };
	void Print();
	void Fill(double* arr[]) throw (invalid_amoutof_elem);
	void Add(Matric m) throw (invalid_matric_size);
private:
	int row, col;
	double** values;
};
Matric::Matric(int row, int col)
{
	this->row = row;
	this->col = col;
	values = new double*[row];
	for (int i = 0; i < row; i++)
	{
		values[i] = new double[col];
		for (int j = 0; j < col; j++)
			values[i][j] = 0;
	}
};

void Matric::Fill(double* arr[]) throw (invalid_amoutof_elem)
{
	if (sizeof(arr) / sizeof(arr[0]) < row * col)
		throw invalid_amoutof_elem("Small amount of elements");
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			values[i, j] = arr[i, j];
};

void Matric::Print()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << values[i][j] << " ";
		cout << endl;
	}
}

void Matric::Add(Matric m) throw (invalid_matric_size)
{
	if (this->Row() != m.Row() || this->Col() != m.Col())
		throw invalid_matric_size("Matrics don't fit");
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			this->values[i][j] += m.values[i][j];
	this->Print();
}



int main(void)
{
	Matric* m[3];
	int a, b;
	for (int i = 0; i < sizeof(m) / sizeof(m[0]); i++)
	{
		cout << "Input the " << i + 1 << " matric size:" << endl;
		cin >> a;
		cin >> b;
		m[i] = new Matric(a, b);
	}
	for (int i = 0; i < sizeof(m) / sizeof(m[0]); i++)
	{
		try
		{
			if (i != sizeof(m) / sizeof(m[0]) - 1)
				(*m[i]).Add(*m[i + 1]);
			else
				(*m[i]).Add(*m[0]);
		}
		catch (invalid_matric_size ex)
		{
			cout << ex.what() << endl;
		}
	}
	return 0;
}