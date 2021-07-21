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

//2. Beautiful matrix

#include<bits/stdc++.h>
using namespace std;

int getDiff(int a,int b){
    return a>b?a-b:b-a;
}

int main(){
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            cin>>temp;
            if(temp==1){
                a=i;
                b=j;
            }
        }
    }
    cout<<getDiff(a,2)+getDiff(b,2);
    return 0;
}

//3. Queue at the School

#include<bits/stdc++.h>
using namespace std;
int main(){
    int strSize,r;
    cin>>strSize>>r;
    string s;
    cin>>s;
    for(int i=0;i<r;i++){
        for(int j=0;j<strSize-1;j++){
            if(s[j]=='B'&&s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s;
    return 0;
}
