// To check number of prime numbers from 1 to n with O(n^2)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(checkprime(i))
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
