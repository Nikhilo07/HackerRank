#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;
    cin>>n>>k>>q;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
k%=n;
    for(int i = 0; i < q; i++) {
        int b;
        cin>>b;
        cout<<a[(n-k+b)%n]<<"\n"; 
    }
    return 0;
}
