#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll sumDiv(ll n)
{
    ll sq= sqrt(n);
    ll sum=1;
    for(int i=2;i<=sq;i++)
        if(n%i==0)sum+=(i+ n/i);

    if(sq*sq==n)sum-=sq;
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int > abundant;
    for(int i=1;i<=28123;i++)
        if(sumDiv(i)>i)abundant.push_back(i);
    
    vector<bool> isPossible(28123+1,false);
    for(int i=0;i<abundant.size();i++)
    {
        for(int j=i;j<abundant.size();j++)
            if(abundant[i]+abundant[j]<=28123)
                isPossible[abundant[i]+abundant[j]]=true;
    }

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n>28123)cout<<"YES"<<endl;
        else {
            if(isPossible[n]==true)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
