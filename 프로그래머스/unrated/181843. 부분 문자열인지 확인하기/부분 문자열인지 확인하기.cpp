#include <string>
#include <vector>

using namespace std;

int CheckSubString(string my_string, string target) {
    int size = my_string.length() - target.length();

    for (int i = 0; i <= size; i++) {
        int count = 0;
        for (int j = 0; j < target.length(); j++)
        {
            if (target[j] == my_string[i + j]) 
            {
                count++;
            } 
            else 
            {
                break;
            }
        }

        if (count == target.length()) 
        {
            return 1;
        }
    }

    return 0;
}

int solution(string my_string, string target) {
    int answer = CheckSubString(
        my_string, target);
    return answer;
}