// time complexity : O(n*log(log(n))) for finding primes
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void sieve_function(vector<bool>&v1,int i)
{
    for(int j=i*i;j<v1.size()+1;j+=i)
    {
        v1[j]=false;
    }
}
int SieveofEratosthenes(int n)
{
    vector<bool>v1(n+1);
    int count=0;
    for(int i=0;i<n+1;i++)
    {
        v1[i]=true;
    }
    v1[0]=false;
    v1[1]=false;
    for(int i=2;i*i<n+1;i++)
    {
        if(v1[i]) {
            sieve_function(v1, i);
        }
    }
    for(int i=0;i<n+1;i++)
    {
        if(v1[i])
        {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    cout<<SieveofEratosthenes(n);
    return 0;
}
