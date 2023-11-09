#include <string>
#include <vector>

using namespace std;

int ApplyControlsToInteger(int n, string control)
{
    int result = 0;
    for (int i = 0; i < control.length(); i++)
    {
        switch (control[i])
        {
            case 'w':
                n += 1;
                break;
            case 's':
                n -= 1;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                break;
        }
    }
    
    result = n;
    return result;
}

int solution(int n, string control) {
    int answer = ApplyControlsToInteger(
    n, control);
    return answer;
}