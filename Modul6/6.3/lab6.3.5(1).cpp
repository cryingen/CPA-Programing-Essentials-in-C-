#include <iostream>

class Tree
{
public:
	void virtual Print() {}
};

class SlashTree :public Tree
{
public:
	void Print();
private:
};

void SlashTree::Print()
{
	std::cout << " /\\" << std::endl;
	std::cout << "//\\\\" << std::endl;
}

class PlusTree :public Tree
{
public:
	void Print();
private:
};

void PlusTree::Print()
{
	std::cout << " /\\" << std::endl;
	std::cout << "/++\\" << std::endl;
}

class SharpTree :public Tree
{
public:
	void Print();
private:
};

void SharpTree::Print()
{
	std::cout << " /\\ " << std::endl;
	std::cout << "/##\\" << std::endl;
}

void PrintTree(Tree &tree)
{
	tree.Print();
}
using namespace std;
int main()
{
	Tree* s[3];
	s[0] = new SlashTree();
	s[1] = new SharpTree();
	s[2] = new PlusTree();
	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
		PrintTree(*s[i]);
	return 0;
}