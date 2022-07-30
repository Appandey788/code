// code by introvert

  /////   ////   // ////// //////  //////  \\      // /////   
   //    // //  //   //   //////  //  //    \\    // // 
  //    //  // //   //   ////    //  //      \\  // /////
/////  //   ////   //   //  //  //////        \\// //
                                                  /////

#include<bits/stdc++.h>
#include<math.h>

using namespace std;

//const int Ni=200005;
int M=1e9+7;


//vector<int> adj[Ni];
//vector<int> sum(Ni);
//vector<int> depth(Ni);
//vector<int> height(Ni);




#define vip(x,p)                               for(int i=0;i<p;i++) {cin>>x[i];}
#define int                                    long long
#define vi                                     vector<int>
#define vii                                    vector<pair<long long,long long>>
//#define pi                                     pair<int,int>
#define pis                                    pair<int,string>
#define psi                                    pair<string,int>
#define pss                                    pair<string,string>
#define vvi                                    vector<vector<int>>
#define wh(n)                                  while(n--)
#define fo(i,b)                                for(int i=0;i<b;i++)
#define fe(i,b)                                for(int i=0;i<=b.i++)
#define ar(n)                                  int ar[n]
#define Y                                      cout<<"YES"<<endl
#define N                                      cout<<"NO"<<endl
#define endl                                   "\n"
#define pb                                     emplace_back
#define bs                                     binary_search
#define rsort(x)                               sort(x.rbegin(),x.rend())
#define all(x)                                 x.begin(),x.end()
#define GCD(a,b)                               __gcd(a,b)
#define mi1                                    cout <<-1 << endl;
#define zero                                   cout << 0 << endl;
#define setbit                                 __builtin_popcountll
#define asc(x)                                 sort(x.begin(),x.end())
#define dsc(x)                                 sort(x.begin(),x.end(),greater<int>())
#define Max(x,y,z)                             max(x,max(y,z))
#define Min(x,y,z)                             min(x,min(y,z))
#define arrsorted(arr)                         is_sorted(arr.begin(),arr.end())
#define lb                                     lower_bound
#define ff                                     first
#define ss                                     second



void __print(int x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}


template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}


#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif




signed main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

 int t=1; 

 //cin >> t;


 for(int tc=1; tc<=t; ++tc){
 
 // cout << "Case #" << i << ": "  ;

 //solve();
 int w,h,n;
 cin >> w >> h >> n;
 

 int l,r; //invariant : l is always false,r is always true
 l=1;
 r=1e18; int ans;

 while(r>=l){

  int mid=(r+l)/2;

  int row=mid/w;
  int want=(row>0 ? (n+row-1)/row : n);
  int col=mid/h;

  if(col>=want and row>0){
    ans=mid;
    r=mid-1;
  }
  else{
    l=mid+1;
  }
 }
 
 cout << ans << endl;

}
}

  
 
   
      

    
    
 


