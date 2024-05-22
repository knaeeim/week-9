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
    

    int n, m; 
    cin>>n>>m; 

    multiset <int> price; 
    vi manush(m); 

    for(int i = 0; i < n; i++){
        int x; cin>>x; 
        price.insert(x);
    }

    for(int i = 0; i < m; i++){ 
        cin>>manush[i]; 
    }

    for(int i = 0; i < m; i++){
        auto it = price.upper_bound(manush[i]); 

        if(it == price.begin()){
            cout << - 1 << endl; 
        }
        else{
            it--; 
            cout << *it << endl; 
            price.erase(it);
        }
    }
    
    return 0; 
}