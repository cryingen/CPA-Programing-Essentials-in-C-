﻿#include <string>
#include <cctype>
#include <algorithm>
#include <iostream>
int main()
{
	std::string sentence, sub;
	int next = 0;
        std::cout << "Input the sentence with '_' before and after word to get spaces after each letter or '*' to get word in uppercase" << std::endl;
	std::getline(std::cin, sentence);

	for (int k = 0; k < sentence.length(); k++) //parse *
	{
		if (sentence.substr(k, 1) == "*")
		{
			next = sentence.find("*", k + 1);
			sub = sentence.substr(k + 1, next - k - 1);
			std::transform(sub.begin(), sub.end(), sub.begin(),
				(int(*)(int))std::toupper);
			sentence.erase(k, next - k + 1); //delete word between "*"
			sentence.insert(k, sub); //insert uppercase word
			k = next + 1;
		}
	}

	for (int i = 0; i < sentence.length(); i++) // parse _
	{
		if (sentence.substr(i, 1) == "_")
		{
			next = sentence.find("_", i + 1);
			for (int j = i + 2; j < next; j += 2)
			{
				sentence.insert(j, " ");
				next++;
			}
			next = sentence.find("_", i + 1);
			sentence.erase(next, 1); //deleting _
			sentence.erase(i, 1);
		}
	}
	std::cout << sentence << std::endl;
	return 0;
}
