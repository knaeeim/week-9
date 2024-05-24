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
        int n; cin>>n; 

        vi v(n); 
        map<int, int> mp;

        for(int i = 0; i < n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }

        sorta(v);
        vll noduplicate; 
        int last = 0;
        for(int i = 0; i < n+2; i++){
            if(mp[i] == 0){
                last = i;
                break;
            }
            else if(mp[i] == 1) noduplicate.pub(i);
        }

        if(noduplicate.size() == 0 or noduplicate.size() == 1) cout << last << endl;
        else cout << noduplicate[1] << endl; 

    }
    return 0; 
}