#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
   
    answer += 12000 * n;
    answer += 2000 * k;
    answer -= 2000 * (n / 10);
    
    return answer;
}