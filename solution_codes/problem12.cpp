#include <bits/stdc++.h>
#define ll long long int
#define K 1000000007
#define x first
#define y second
using namespace std;

ll factors(ll n)
{
    ll count=0;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
            count+=2;
    
    if(sqrt(n)*sqrt(n)==n)count--;
    return count;
}
int main() {
	/*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    */
    ll ans=-1;
    
    ll i=1;
    while(1)
    {
        if(factors((i*(i+1))/2)>500)
        {    ans=(i*(i+1))/2;break;}
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
