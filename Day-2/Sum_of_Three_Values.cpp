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
    

    int n, target_sum; 
    cin>>n>>target_sum; 

    vector <pair<int, int>> v; 

    for(int i = 0; i < n; i++){
        int x; cin>>x;
        v.pub({x, i+1});
    }

    sort(v.begin(), v.end(), [&](pair<int, int> a, pair<int, int> b){
        return a.first < b.first;
    });

    vector <int> ans; 

    ll sum = 0;

    bool paichi = false;

    for(int i = 0; i < n; i++){
        int left = i+1;
        int right = n - 1; 
        bool peyechi = false;

        while(left < right){
            ll current_sum = v[i].first + v[left].first + v[right].first;
            if( current_sum == target_sum ){
                ans.pub(v[i].second);
                ans.pub(v[left].second);
                ans.pub(v[right].second);
                peyechi = true;
                paichi = true;
                break;
            }
            else if(current_sum < target_sum){
                left++;
            }
            else{
                right--;
            }
        }

        if(peyechi) break;
    }

    sorta(ans);
    
    if (paichi == true) range(ans)
    else cout << "IMPOSSIBLE" << endl;

    return 0; 
}