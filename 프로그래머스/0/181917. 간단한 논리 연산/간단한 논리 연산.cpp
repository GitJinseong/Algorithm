#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) 
{
    bool answer = true;
    
    bool x12;
    bool x34;
    
    if (x1 || x2)
    {
        x12 = true;
    }
    else 
    {
        x12 = false;    
    }
    
    if (x3 || x4)
    {
        x34 = true;
    }
    else 
    {
        x34 = false;
    }
    
    if (x12 && x34)
    {
        answer = true;
    }
    else 
    {
        answer = false;
    }
    
    return answer;
}