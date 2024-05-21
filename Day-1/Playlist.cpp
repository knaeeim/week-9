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
    

    int n; cin>>n; 

    vi v(n); 

    for(int i = 0; i < n; i++) cin>>v[i];
    
    int ans = 0; 

    int i = 0, j = 0; 

    set<int> set;

    while( i < n and j < n){
        while(j < n and !set.count(v[j])){
            //taile insert Korbo 
            set.insert(v[j]); 
            ans = max(ans, j - i + 1);
            j++;
        }

        while(j < n and set.count(v[j])){
            set.erase(v[i]);
            i++;
        }
    } 

    cout << ans << endl; 

    return 0; 
}