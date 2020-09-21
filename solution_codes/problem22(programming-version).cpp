#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s[5200];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>s[i];

    sort(s,s+n);
    int q;cin>>q;
    while(q--){
        string t;cin>>t;
        int i=0;
        
        while(s[i]!=t)i++;
        ll score=0;
        for(int k=0;k<t.size();k++)score+=(t[k]-'A'+1);
       // cout<<score<<endl;
        score*=(i+1);
        cout<<score<<endl;
    }
    return 0;
}
