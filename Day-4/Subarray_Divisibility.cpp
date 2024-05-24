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
    

    ll n;
    cin>>n; 

    map <ll, ll> mp; 

    ll sum = 0, cnt = 0; 

    mp[sum]++; 

    for(int i = 0; i < n; i++){
        ll x1; cin>>x1; 
        sum +=x1; 
        cnt += mp[((sum % n) + n) % n];
        mp[((sum % n) + n) % n]++;
    }

    cout << cnt << endl;

    return 0; 
}