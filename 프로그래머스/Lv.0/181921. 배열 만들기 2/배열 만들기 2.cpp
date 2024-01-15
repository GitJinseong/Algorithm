#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) 
{
    vector<int> answer;
    bool check = false;
    
    for (int i = l; i <= r; i++)
    {
        check = true;
        
        string str = to_string(i);
        for(char c : str)
        {
            if(c =='\0') continue;
            
            if (c != '5' && c != '0') 
            {
                check = false;
                break;
            }
        }
        
        if(check == false) continue;
        else answer.push_back(i);
    }
    
    if (answer.size() == 0)
    {
       answer.assign(1, -1); 
    }
    
    return answer;
}