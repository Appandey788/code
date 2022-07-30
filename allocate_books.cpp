//https://www.codingninjas.com/codestudio/problems/ayush-gives-ninjatest_1097574?leftPanelTab=1
bool check(long long mid,vector <int> time,int n, int m){
    long long cnt=1;long long sum=0;
    for(int i=0; i<m; i++){
        if(time[i]>mid){
            return 0;
        }
        if(sum+time[i]<=mid){
            sum+=time[i];
        }
        else{
            cnt++;
            sum=time[i];
            if(cnt>n){
                return 0;
            }
        }
    }
    
    return 1;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
    long long add=0;
    for(int i=0; i<m; i++){
        add+=time[i];
    }
    long long lo=0,hi=add; // type: FFFFFFFTTTTTTT
    long long ans=1e15;
    while(hi>=lo){
        
        long long mid=(hi+lo)/2;
        
        if(check(mid,time,n,m)){
            ans=min(ans,mid);
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}
