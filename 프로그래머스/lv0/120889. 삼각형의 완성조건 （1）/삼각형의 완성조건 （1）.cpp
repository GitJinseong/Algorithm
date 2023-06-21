#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        if (sides[i] > sides[3 - i])
        {
            max = sides[i];
        }
        answer += sides[i];
    }
    return (answer - max) <= max ? 2 : 1;
}