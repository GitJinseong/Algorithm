#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

string solution(string my_string, string letter) {
    // +1을 사용하여 마지막 인덱스를 ''\0'으로 끝이라고 선언한다.
    // 하지 않을경우 core dump 발생
    char answer[my_string.length() + 1];
    char stringValue[my_string.length() + 1];
    char letter_[letter.length()];
    
    answer[my_string.length()] = '\0';
    stringValue[my_string.length()] = '\0';
    my_string.copy(stringValue, my_string.length());
    letter.copy(letter_, letter.length());
    
    int count = 0;
    
    for (int i = 0; i < my_string.length() + 1; i++)
    {
        
        if (letter_[0] != stringValue[i])
        {
            answer[count] = stringValue[i];
            count++;
        }
        
    }
    
    return answer;
}