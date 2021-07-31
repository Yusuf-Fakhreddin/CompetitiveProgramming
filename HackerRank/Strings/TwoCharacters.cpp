#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MX 10000008
#define lp(i, n) for (ll i = 0; i < n; i++)
const int N = 1e7 + 7; // 100,005
const long long INF = 1e18L + 5; // 10^18
const ll MOD = 1000000007 ;
#define X first
#define Y second
 
/*map<int,vector<int>> adj;
map<int,bool>visited;
long long d[N]; // distance from vertex 1
priority_queue<pair<int,int>>q;
*/
 int valid(string x) {
    const int n = x.size();
    for (int i = 1; i < n; ++i)
        if (x[i] == x[i-1])
            return false;
    return true;
}
string s ; 
int ans,n ; 
int arr[30] ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */

   cin >>n >> s ; 

   for (int i=0;i<n;i++)
   {
     arr[s[i]-'a']++;
   }

    for (char a = 'a'; a <= 'z'; ++a)
    for (char b = 'a'; b <= 'z'; ++b)
    if (a != b)
    {
        if (s.find(a) == string::npos) continue;
        if (s.find(b) == string::npos) continue;
      string x; 
      for (const char ch : s) {
        if(ch ==a|| ch==b)
        x.push_back(ch);
      }
      if(valid(x))
        ans=max(ans,(int)x.size());
      }

   cout << ans;

return 0 ;}