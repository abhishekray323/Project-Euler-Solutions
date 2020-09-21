#include <bits/stdc++.h>
#define ll long long int
#define K 1000000007
#define x first
#define y second
using namespace std;

bool isPrime(ll n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    
    return true;
}
int main() {
	/*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    */
    ll n=2*(1e6);
    ll ans=2;
    for(int i=3;i<=n;i++)
        if(isPrime(i))ans+=i;
    
    cout<<ans<<endl;
    return 0;
}
