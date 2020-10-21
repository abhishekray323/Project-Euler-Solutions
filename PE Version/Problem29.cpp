#include<bits/stdc++.h>
#define ll long long
using namespace std;

string mul(string s, ll n)
{
    ll crry=0;
    for(int i=0;i<s.size();i++)
    {
        ll t=(s[i]-'0')*n +crry;
        s[i]=t%10+'0';
        crry=t/10;
    }
    
    string crr=to_string (crry);
    int i=0,j=crr.size()-1;
    while(i<j)swap(crr[i++],crr[j--]);
    if(crry!=0)s=s+crr;
    
    return s;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // This is unoptimized code run only for N=100
    map<string , ll> m;
    ll N;//cin>>N;
    N=100;
    
    for(ll i=2;i<=N;i++)
    {
            string s=to_string (i);
            ll st=0,en=s.size()-1;
            while(st<en)swap(s[st++],s[en--]);

            for(ll j=2;j<=N;j++)
            {
                s=mul(s,i);
             //   cout<<s<<endl;
                m[s]++;
            }
    }
    
    cout<<m.size()<<endl;
    return 0;
}
