#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll a[5001];
string add(string s, string n)
{
    int crry=0;
    for(int i=0;i<s.size();i++)
    {
        int t=(s[i]-'0')+crry;
        if(i<n.size())t+=(n[i]-'0');
        s[i]=(t%10)+'0';
        crry=t/10;
    }
    string crr= to_string(crry);
    int i=0,j=crr.size()-1;
    while(i<j)swap(crr[i++],crr[j--]);
    if(crry>0) s=s+crr;
    return s;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1="0",s2="1";
    ll seq_no=1;
    for(int i=1;i<=5000;i++)
    {
        while(s2.size()<i)
        {
            string t=s2;
            s2=add(s2,s1);
            s1=t;
            seq_no++;
        }
        a[i]=seq_no;
    }
    
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<a[n]<<endl;

    }
    return 0;
}
