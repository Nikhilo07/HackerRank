#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<ll> mus;
#define MAX 1000001
int visited[MAX];
void addedge(vector<ll> adj[],ll u,ll v){
    adj[u].pb(v);
    adj[v].pb(u);
}
ll sum;
vector<ll> reso;
ll dfs(ll s,vector<ll> adj[]){
    visited[s]=1;
    for(auto i:adj[s]){
        if(visited[i]==0){
            sum+=mus[i];
         //   cout<<i+1<<"->"<<mus[i]<<"\n";
            dfs(i,adj);
        }
    }
    return sum;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> adj[n];
        for(int i=0;i<m;i++){
            ll x,y;
            cin>>x>>y;
            addedge(adj,x-1,y-1);
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<adj[i].size();j++)cout<<adj[i][j]<<" ";
        //     cout<<"\n";
        // }
        
        for(ll i=0;i<n;i++){
            ll kk;
            cin>>kk;
            mus.pb(kk);
        }
        if(m==0){
            //sort(mus.begin(),mus.end());
            if(k>n)cout<<"-1\n";
            else {sum=0;
        sort(mus.begin(),mus.end());
            ll count=0;ll front = 0,back = mus.size()-1;
            while(count<k){
                if(count%2==0){
                sum+=mus[back];
                    back--;}
                else{
                    sum+=mus[front];
                    front++;
                }
                count++;
            }
            cout<<sum<<"\n";
            }
        }else{
       // vector<ll> reso;
        for(ll i=0;i<n;i++) visited[i]=0;
        for(ll i=0;i<n;i++){
            sum=0;
            if(adj[i].size()<1) {reso.pb(mus[i]);}
            else{ 
            if(!visited[i]){
              //  cout<<i<<"*";
               sum=mus[i]; 
               sum=  dfs(i,adj);
                reso.pb(sum);
            }}
        }
       
        // for(int i=0;i<reso.size();i++){
        //   cout<<reso[i]<<" ";
        // }cout<<"\n";
        if(k>reso.size()) cout<<"-1";
        else{sum=0;
        sort(reso.begin(),reso.end());
            ll count=0;ll front = 0,back = reso.size()-1;
            while(count<k){
                if(count%2==0){
                sum+=reso[back];
                    back--;}
                else{
                    sum+=reso[front];
                    front++;
                }
                count++;
            }
            cout<<sum;
        }
        cout<<"\n";
        }
        reso.clear();
        mus.clear();
    }
    return 0;
}
