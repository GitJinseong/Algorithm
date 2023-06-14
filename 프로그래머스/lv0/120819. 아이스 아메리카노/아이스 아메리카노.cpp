#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int coffeePrice = 5500;
    int cups = 0;
    
    while (true)
    {
        
        if (money >= coffeePrice)
        {
            money -= coffeePrice;
            cups++;
            
            continue;
        }
        
        answer.push_back(cups);
        answer.push_back(money);
        
        break;
    }
    
    return answer;
}