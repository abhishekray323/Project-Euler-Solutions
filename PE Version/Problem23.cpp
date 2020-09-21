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
    ll ans=0;
    for(int i=1;i<=28123;i++)
        if(isPossible[i]==false)ans+=i;
    cout<<ans<<endl;
    
    return 0;
}
