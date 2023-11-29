#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//o[1]
    cin>>n;//o[1]
    int a[n];//o[1]
    for (int i = 0; i < n; i++)//o[n]
    {
        cin>>a[i];//o[1]
    }
    int sum = 0;
    for (int i = 0; i < n; i++)//o[n]
    {
        sum += a[i];//o[1]
    }
    cout<<sum<<endl;//o[1]
    
    return 0;
}