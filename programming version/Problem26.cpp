#include<bits/stdc++.h>
#define ll long long
using namespace std;

int smallD[10001];
int cycleLen(int d)
{
    int n=1,len=0;

    map<int, int> m;
    while(1)
    {
        while(n<d)n*=10;
        int i=1;

        n%=d;
        if(n==0)break;

        if(m[n]==0)m[n]++;
        else break;
        
        len++;
    }
    if(n==0)return 0;

    return len;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ll longestCycle=-1,value=0;
    for(int i=3;i<=10000;i++)
    {
        int len=cycleLen(i-1);
        if(len>longestCycle)
            longestCycle=len, value=i-1;
        smallD[i]=value;
    }
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<smallD[n]<<endl;
    }

    return 0;
}
