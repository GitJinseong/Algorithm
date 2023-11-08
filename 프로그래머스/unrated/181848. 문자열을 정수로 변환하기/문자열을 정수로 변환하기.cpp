#include <string>
#include <vector>
#include <iostream>

using namespace std;

int ChangeStringToInt(string str)
{
    int num = 0;
    int size = 1;
    for (int i = str.length() - 1;
        i >= 0; i--)
    {
        num += (str[i] - '0') * size * 1;
        size *= 10;
    }
    
    return num;
}

int solution(string n_str) {
    int answer = ChangeStringToInt(n_str);
    return answer;
}