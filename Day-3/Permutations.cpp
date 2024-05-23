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

    vi ans; 

    if(n <= 3 and n > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    int i = 1, j = 2; 
    int f = 1;

    if(n % 2 == 0){
        while(j <= n){
            ans.pub(j);
            j+=2;
        }

        while(i <= n){
            ans.pub(i);
            i+=2;
        }
    }
    else{
        while(i <= n){
            ans.pub(i);
            i+=2;
        }

        while(j <= n){
            ans.pub(j);
            j+=2;
        }
    }

    range(ans); 

    return 0; 
}