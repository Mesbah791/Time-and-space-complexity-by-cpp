#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i < sqrt(n); i++)//o(sqrtN) complexity
    {
        if (n%i == 0)
        {
            cout<<i<<" ";
            if (n/i != i)
            {
                cout<<n/i<<endl;
            }
            
        }
        
    }
    
    // both codes are same 

    for (int i = 1; i*i <=n; i++)//o(sqrtN) complexity
    {
        if (n%i == 0)
        {
            cout<<i<<" ";
            if (n/i != i)
            {
                cout<<n/i<<endl;
            }
            
        }
        
    }
    
    return 0;
}