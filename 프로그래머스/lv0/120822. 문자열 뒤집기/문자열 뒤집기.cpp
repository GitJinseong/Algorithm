#include <vector>
#include <string>
#include <iostream>


using namespace std;

string solution(string my_string) {
    char answer[my_string.length()];
    char stringValue[my_string.length()];
    // char의 배열의 끝을 '/0'으로 알려줘야 함
    // 아니면 []같은 이상한 값 까지 출력됨.
    answer[my_string.length()]  ='\0';
    // #include <string> 해더파일로 사용가능한 함수
    // string 값을 char 배열에 넣는다.
    my_string.copy(stringValue, my_string.length());
    int j = 0;
    for (int i = my_string.length() - 1; i > -1; i--)
    {
        answer[j] = stringValue[i];
        j = j + 1;
    }
    return answer;
}