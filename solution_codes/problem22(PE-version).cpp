#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s[6000];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i=0;
    char c;
    while(cin>>c)
    {
        if(c=='\"')continue;
        else if(c==',')i++;
        else s[i].push_back(c);
    }
 
    sort(s,s+i+1);
    int j=0;
    ll tScore=0;
    while(j<=i)
    {
        string t=s[j];
        ll score=0;
        for(int k=0;k<t.size();k++)score+=(t[k]-'A'+1);
        score*=(j+1);
        tScore+=score;
        j++;
    }
    cout<<tScore<<endl;
    return 0;
}
