#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        ll x, y; 
        cin>>x>>y; 

        if(x > y){
            ll ans = 0;
            if(x % 2 != 0){
                ans = ((x-1) * (x-1)) + y; 
            }
            else{
                ans = (x * x) - y + 1;
            }

            cout << ans << endl;
        }
        else{
            ll ans  = 0;

            if(y % 2 != 0){
                ans = (y*y) - x + 1;
            }
            else{
                ans =((y - 1 ) * (y - 1)) + x; 
            }

            cout << ans << endl; 
        }
    }

    return 0; 
}