//1. Young Physicist

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,sa=0,sb=0,sc=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        sa+=a;
        sb+=b;
        sc+=c;
    }
    if(sa || sb || sc) cout<<"NO";
    else cout<<"YES";
    return 0;
}