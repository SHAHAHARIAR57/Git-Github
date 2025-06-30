
#include <bits/stdc++.h>
#define ll long long
#define pe cout << endl
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
    ll t=1;         cin >> t;
    while (t--)
    {
        ll a,b,c,d;  cin>>a>>b>>c>>d; 
        ll ans=0;

        if((a>c && b>=d) || (a>=c && b>d))    ans+=2;
        if((a>d && b>=c) || (a>=d && b>c))    ans+=2;
        
        cout<<ans<<endl;
        
    }
}


    
