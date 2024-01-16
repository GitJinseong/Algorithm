#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    int temp;
    
    cin >> N;
    
    int numArr[10001] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        numArr[temp] += 1;
    }
    
    int count = 0;
    for (int i = 0; i < 10001; i++)
    {
        if (count == N)
        {
            break;
        }
        
        if (numArr[i] == 0) { continue; }
        else 
        {
            for (int j = 0; j < numArr[i]; j++)
            {
                cout << i;
                count += 1;
                
                if(count != N)
                {
                    cout << '\n';
                }
            }
        }
    }
}