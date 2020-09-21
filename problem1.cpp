#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int n=1000;
	int c=0;
	for(int i=1;i<n;i++)
        if(i%3==0 || i%5==0)c+=i;

    cout<<c;
	return 0;

}
