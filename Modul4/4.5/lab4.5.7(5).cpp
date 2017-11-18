#include <iostream>
#include <math.h>
#include <string>
using namespace std;

string ForDPatternNLeng(string pattern, string sentence)//find string DD...D pattern
{
    string result;
    int k = 0;
    for(int i = 0; i < pattern.length(); i++)
        for(int j = k; j < sentence.length(); j++)
            if(pattern.substr(i, 1) == "D")
                if((sentence.substr(j, 1).compare(pattern.substr(i, 1)) <= -11) && sentence.substr(j, 1).compare(pattern.substr(i, 1)) >= -20)
                {
                    result += sentence.substr(j, 1);
                    k = j + 1;
                    j = sentence.length();
                }
    return result;
}

string ForAPatternNLeng(string pattern, string sentence)//find string matching AA...A pattern
{
    string result;
    for(int j = 0; j < sentence.length(); j++)
        for(int i = 0; i < pattern.length(); i++)
            if(result.length() == pattern.length())
                return result;
            else
            {    
                if(sentence.substr(j, sentence.length()).substr(i, 1).compare("A") >= 0 && sentence.substr(j, sentence.length()).substr(i, 1) != " ")
                    result += sentence.substr(j, sentence.length())[i];
                else
                {
                    result = "";
                    break;
                }
            }
    return result;
}

string ForQMPatternNLeng(string pattern, string sentence, string part)//find string matching ??...? pattern
{
    int n = sentence.find(part) + part.length();//переменная тупо что б понятно было
    return sentence.substr(n, pattern.length());
}

string ForLCLPatternNLeng(string pattern, string sentence)//find string matching lower-case leters pattern
{
    string result;
    int k = 0;
    for(int i = 0; i < pattern.length(); i++)
        for(int j = k; j < sentence.length(); j++)
            if(sentence[j] == pattern[i] || abs(string(1, sentence[j]).compare(string(1, pattern[i]))) == 32)
            {   
                result += sentence[j];
                i++;
                if(result.length() == pattern.length())
                    return result;
            }
            else
            {
                i = 0;
                result = "";
            }
    return result;
}

string FindAlg(string pattern, string sentence, string part)
{
    int value = pattern.substr(0, 1).compare("A");
    switch(value)
    {
        case 0:
            return ForAPatternNLeng(pattern, sentence);
        case 3:
            return ForDPatternNLeng(pattern, sentence);
        case -2:
            return ForQMPatternNLeng(pattern, sentence, part);
        default:
            return ForLCLPatternNLeng(pattern, sentence);
    }
}
int main()
{   
    string pattern, sentence, result = "", part;
    cout << "Input pattern please" << endl;
    getline(cin, pattern);
    cout << "Input sentence please" << endl;
    getline(cin, sentence);
    int k = 0;
    int i = 0;
    cout << "The parts of sentence that matching your pattern is:" << endl;
    //проверяем каждый сабстринг длинной шаюлона соответствует ли он шаблону
    for(int j = 0; j < sentence.length() - pattern.length() + 1; j++)
    {
        //цикл для разбития шаблона на части
        do
        {
            part = pattern.substr(k, i - k + 1);
            i++;
        }while(pattern[i] == pattern[k]);
        k = i;//для перехода на следующую часть шаблона
        if(FindAlg(part, sentence.substr(j, pattern.length()), result).length() < part.length())//проверяем соответствует ли найденное выражение части шаблона
        {
            //если нет, то обнуляем
            result = "";
            i = 0;
            k = 0;
        }
        else
        {
            result += FindAlg(part, sentence.substr(j, pattern.length()), result);
            if(result.length() == pattern.length())
            {
                if(result == sentence.substr(j, pattern.length()))
                    cout << result << endl;
                result = "";//в случае успеха обнуляем все, потому что в предложении 
                //может находиться несколько частей соответствующих шаблону
                i = 0;
                k = 0;
            }
            else//на данном этапе не все части шаблона проверенны, 
            //для каждой части предложения(тоесть значения j) надо проверить все части,
            //если для первой части шаблона проверка успешна
                j--;
        }
    }
    return 0;
}
