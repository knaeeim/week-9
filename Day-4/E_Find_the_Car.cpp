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
    

    int t; cin>> t; 

    while(t--){
        int n, k, q; 
        cin>>n>>k>>q; 

        vi a(k+1), b(k+1);

        a[0] = 0;
        b[0] = 0;

        for(int i = 1; i <=k ; i++){
            cin>>a[i];
        }

        for(int i = 1; i <= k; i++){
            cin>>b[i];
        }

        while(q--){
            ll d; cin>>d; 

            if(d == 0) {
                cout << 0 << " ";
                continue;
            }

            if(d == n){
                cout << b[k] << " ";
                continue;
            }

            int index = upper_bound(a.begin(), a.end(), d) - a.begin();

            ll ans = b[index-1];

            ll distance = a[index] - a[index - 1];
            ll time = b[index] - b[index - 1];

            ll extra_distance = d - a[index - 1];

            ll extra_time = ((extra_distance * time)/ distance);

            ans +=extra_time;

            cout << ans << " "; 

        }
        cout << endl;
    }
    return 0; 
}