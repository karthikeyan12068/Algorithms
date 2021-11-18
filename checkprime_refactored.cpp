// To check number of prime numbers from 1 to n with O(n*sqrt(n))
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n)
{
    int count=0;
    int bound_cond=sqrt(n);
    for(int i=1;i<=bound_cond;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            {
                count++;
            }
            else
            {
                count+=2;
            }
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
int main()
{
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
}
