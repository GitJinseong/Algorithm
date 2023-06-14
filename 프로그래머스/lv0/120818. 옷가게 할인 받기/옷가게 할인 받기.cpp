#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    float discountPercent[3] = {0.95, 0.9, 0.8};
    int discountPrice[3] = {100000, 300000, 500000};
    int size = sizeof(discountPrice) / 4;
    
    for (int i = 0; i < 3; i++)
    {
        
        if (price >= discountPrice[i])
        {
            answer = price * discountPercent[i];
        }
        else if (i == 0)
        {
            answer = price;
        }
        
    }
    
    return answer;
}