#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    
    while (true)
    {
        if (angle >= 90)
        {
            angle = angle - 90;
            answer = answer + 2;
        }
        else if (angle > 0)
        {
            angle -= 90;
            answer++;
        }        
        else 
        {
            break;
        }
    }
    return answer;
}