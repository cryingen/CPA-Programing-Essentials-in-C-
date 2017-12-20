#include <iostream>
#include <deque>
#include <string>

using namespace std;

class RoboCommander
{
public:
	RoboCommander() {};
	void AddCommand(string c)
	{
		com.push_back(c);
	};
	void UndoCommand() 
	{
		if(!com.empty())
			com.pop_back();
	};
	void Execute() 
	{
		while(!com.empty())
		{
			cout << com.back() << endl;
			com.pop_back();
		}
	};
private:
	deque<string> com;
};

int main()
{
	RoboCommander commander;
	commander.AddCommand("MoveLeft");
	commander.AddCommand("MoveRight");
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand("MoveLeft");
	commander.AddCommand("MoveForward");
	commander.AddCommand("MoveLeft");
	commander.AddCommand("MoveForwar");
	commander.AddCommand("MoveRight");
	commander.AddCommand("MoveBackward");
	commander.Execute();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand("MoveForward");
	commander.Execute();
	return 0;
}