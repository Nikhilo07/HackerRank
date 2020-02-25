#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll int x,y,z,a,b;
        cin>>x>>y>>z;
        a=abs(x-z);
        b=abs(y-z);
        if(a<b)
        {
            cout<<"Cat A"<<endl;
        }
       else if(b<a)
        {
            cout<<"Cat B"<<endl;
        }
        else
        cout<<"Mouse c"<<endl;

    }

}
