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

int n , k;
string s ; 
char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */

   cin >> n >> s >> k;
   if(k>26)
   k=k-(k/26)*26;
   lp(i,n){
     if(s[i]=='-')continue;
       else if(s[i]>=65&&s[i]<=90)
     {   
    if(s[i]+k>90){
       s[i]=s[i]+k-26;
     }
          else 
     s[i]=s[i]+k;
     }
     else if(s[i]>=97&&s[i]<=122)
     {    if(s[i]+k>122){
       s[i]=s[i]+k-26;
     }
     
     else 
     s[i]=s[i]+k;
     }
   }
  lp(i,n)cout<<s[i];

return 0 ;}