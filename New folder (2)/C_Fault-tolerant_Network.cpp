#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;

    vector<ll> a(n);
    vector<ll> b(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ans=0;

    ans+=(a[0]>b[0] ? a[0]-b[0] :b[0]-a[0]);
    ans+=(a[n-1]>b[n-1] ? a[0]-b[n-1] :b[n-1]-a[n-1]);

    cout<<ans<<endl;





    
    
    
    
    
    
}
    
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
    
    while(t--)
      solve();
    
    
    return 0;
}