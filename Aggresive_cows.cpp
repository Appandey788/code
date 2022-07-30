//https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559?leftPanelTab=0
 bool check(int mid,vector <int> a,int n,int c){
  int prev=-1e9;
  int cow=0;

  for(int i=0; i<n; i++){
    if(a[i]-prev>=mid){
      cow++;
      prev=a[i];
    }
  }
  if(cow>=c){
      return 1;
  }
  return 0;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    int n,c;
    n=stalls.size();
    c=k;
 vector <int> a(n);

 for(int i=0; i<n; ++i){
  a[i]=stalls[i];
 }
 sort(a.begin(),a.end());

 int l,r;   // type: TTTTTTTTFFFFFFFFF
 l=0;
 r=1e9; 
 int ans=-1;

 while(r>=l){

  int mid=(r+l)/2;

  if(check(mid,a,n,c)){
    ans=mid;
    l=mid+1;
  }
  else{
    r=mid-1;
  }
 }
 
 return ans;

}
