#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

string solution(string my_string, string letter) {
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