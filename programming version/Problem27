#include<bits/stdc++.h>
#define ll long long
using namespace std;

int prime[2000];
bool isPrime(int n)
{
    if(n==2)return true;
    if(n<2)return false;
    if(n<2000 && prime[n]!=-1)return prime[n];

    int sq=sqrt(n);
    for(int i=2;i<=sq;i++)
        if(n%i==0){
            if(n<2000)prime[n]=false; 
            return false;
        }
    
    if(n<2000)prime[n]=true;
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    for(int i=0;i<2000;i++)prime[i]=-1;
    int N;cin>>N;
   
    ll max=-1;
    pair<ll, ll> value={0,0};
    for(int i=2;i<=N;i++)
    {
        ll b=i;
        for(int j=-N;j<=N;j++)
        {       
            ll a=j;
            ll n=0;
            while(isPrime((n*n)+(a*n)+b))n++;
            if(n>max)max=n, value={a,b};
        }
    }

    cout<<value.first<<" "<<value.second<<endl;
    return 0;
}
