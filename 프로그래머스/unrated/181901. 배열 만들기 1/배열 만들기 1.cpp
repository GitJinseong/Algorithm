#include <string>
#include <vector>

using namespace std;

vector<int> GenerateMultiplesArray(int n, int k)
{
    vector<int> result;
    int i = 1;
    while(true)
    {
        int tempNum = k * i;
        if (tempNum > n) { break; }
        result.push_back(tempNum);
        i++;
    }
    
    return result;
}

vector<int> solution(int n, int k) {
    vector<int> answer = GenerateMultiplesArray(n, k);
    return answer;
}