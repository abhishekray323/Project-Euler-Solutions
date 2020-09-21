#include <bits/stdc++.h>
#define ll long long int
#define K 1000000007
#define x first
#define y second
using namespace std;

ll a[20][20];

int main() {
	/*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    */
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
            cin>>a[i][j];
        
    ll ans=-1;
    
    for(int i=0;i<20;i++)
        for(int j=0;j<20-4+1;j++)
        ans=max(ans,a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
    
    for(int j=0;j<20;j++)
        for(int i=0;i<20-4+1;i++)
        ans=max(ans, a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
    
    for(int i=0;i<20-4+1;i++)
        for(int j=0;j<20-4+1;j++)
        ans=max(ans,a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
    
    for(int i=3;i<20;i++)
        for(int j=0;j<20-4+1;j++)
        ans=max(ans,a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3]);
    
    cout<<ans<<endl;
    return 0;
}
