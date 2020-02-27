#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int freq[6]= {0};
    for(int i=0;i<n;i++)
    {
        int index=a[i];
        freq[index]++;
    }
    int maxtype=1;
    int max=freq[1];
    for(int i=2;i<6;i++)
    {
        if(freq[i]>max)
        {
maxtype=i;
max=freq[i];
        }   
         }
         cout<<maxtype;
}
