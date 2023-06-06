#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; not (i == n + 1); i++)
    {
        if (i % 2 == 0)
        {
            answer = answer + i;
        }
    }
    return answer;
}