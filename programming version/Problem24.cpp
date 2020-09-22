#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int fact[14];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    fact[0]=1;
    for(int i=1;i<=13;i++)
        fact[i]=fact[i-1]*i;
 
    int t;cin>>t;
    while(t--)
    {
        int N ;cin>>N;
        vector<bool> vis(13,false);
        int n=13-1; string ans;

    for(int i=0;i<13;i++)
    {
        int f=fact[n];
        int j=0;
        while(1)
        {
            while(vis[j]==true)j++;
            if(N-f>0)N-=f, j++;
            else break;
        }
 
        ans.push_back(j+'a');
        vis[j]=true;
        n--;
    }
    cout<<ans<<endl;
    
    }
    return 0;
}
