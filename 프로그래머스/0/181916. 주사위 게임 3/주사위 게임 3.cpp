#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    if (a == b && b == c && c == d)
    {
        answer = a * 1111;
    }
    else if (a == b && b == c && a != d)
    {
        answer = (10 * a) + d;
        answer *= answer;
    }
    else if (a == b && b == d && a != c)
    {
        answer = (10 * a) + c;
        answer *= answer;
    }
    else if (a == c && c == d && a != b) 
    {
        answer = (10 * a) + b;
        answer *= answer;
    }
    else if (b == c && c == d && b != a)
    {
        answer = (10 * b) + a;
        answer *= answer;
    }
    else if (a == b && c == d && b != c)
    {
        answer = a + c;
        if (a > c)
        {
            answer *= a - c;
        }
        else if (a < c)
        {
            answer *= c - a;
        }
    }
    else if (a == c && b == d && a != b)
    {
        answer = a + b;
        if (a > b)
        {
            answer *= a - b;
        }
        else if (a < b)
        {
            answer *= b - a;
        }
    }
    else if (a == d && b == c && a != b)
    {
        answer = a + b;
        if (a > b)
        {
            answer *= a - b;
        }
        else if (a < b)
        {
            answer *= b - a;
        }
    }
    else if (a == b && a != c && a != d && c != d)
    {
        answer = c * d;
    }
    else if (a == c && a != b && a != d && b != d)
    {
        answer = b * d;
    }
    else if (a == d && a != b && a != c && b != c)
    {
        answer = b * c;
    }
    else if (b == c && b != a && b != d && a != d)
    {
        answer = a * d;
    }
    else if (b == d && b != a && b != c && a != c)
    {
        answer = a * c;
    }
    else if (c == d && c != a && c != b && a != b)
    {
        answer = a * b;
    }
    else if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        answer = a;
        if (answer > b)
        {
            answer = b;
        }
        if (answer > c)
        {
            answer = c; 
        }
        if (answer > d)
        {
            answer = d;
        }
    }
    
    return answer;
}