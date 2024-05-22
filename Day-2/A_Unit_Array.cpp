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

        int minus1s = 0, plus1s = 0;

        for(int i  = 0; i < n; i++){
            cin>>v[i]; 

            if(v[i] == -1 ) minus1s++;
            else plus1s++;
        }

        if(minus1s == n) cout << minus1s << endl; 
        else if(plus1s == n or minus1s == plus1s or plus1s > minus1s) cout << 0 << endl; 
        else if(minus1s > plus1s){
           int diff = minus1s - plus1s;
           int ans = minus1s - diff;
           cout << min(ans, diff) << endl; 

        } 
    }
    return 0; 
}