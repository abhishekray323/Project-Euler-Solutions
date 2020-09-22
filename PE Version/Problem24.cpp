#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int fact[14];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    fact[0]=1;
    for(int i=1;i<=13;i++)
        fact[i]=fact[i-1]*i;
 
    int t=1;
    //cin>>t;
    while(t--)
    {
        int N=1000000; 
        //;cin>>N;
        vector<bool> vis(10,false);
        int n=10-1; string ans;

    for(int i=0;i<10;i++)
    {
        int f=fact[n];
        int j=0;
        while(1)
        {
            while(vis[j]==true)j++;
            if(N-f>0)N-=f, j++;
            else break;
        }
 
        ans.push_back(j+'0');
        vis[j]=true;
        n--;
    }
    cout<<ans<<endl;
    
    }
    return 0;
}
