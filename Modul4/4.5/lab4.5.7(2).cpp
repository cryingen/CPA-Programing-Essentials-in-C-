#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text, from, to;
    cout << "Input original text: ";
    getline(cin, text);
    cout << "Input the word you want to replace: ";
    getline(cin, from);
    cout << "Input the wrod you want to replace with: ";
    getline(cin, to);
    int pos = text.find(from);
    while (pos != -1)
    { 
        text.replace(pos, from.size(), to);
        pos = text.find(from);
    }
    cout << text << endl;
    return 0;
}