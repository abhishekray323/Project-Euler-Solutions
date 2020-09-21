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
    ll n=1000,i,j,k;
    for(i=1;i<=998;i++)
    {
        for(j=i+1;j<=999;j++)
        {   
            k=n-(i+j);
            if(i*i +j*j ==k*k)
            {     cout<<i*j*k;
                    return 0;
            }
        }
    }
    return 0;
}
