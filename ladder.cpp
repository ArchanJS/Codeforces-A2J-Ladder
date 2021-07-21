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

//2. Beautiful Matrix

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

//4. Borze

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            ans+='0';
        }
        else{
            if(s[i+1]=='.')ans+='1';
            else ans+='2';
            i++;
        }
    }
    cout<<ans;
    return 0;
}

//5. Beautiful Year

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    while(true){
        year++;
        string s=to_string(year);
        set<char> ch;
        for(int i=0;i<s.size();i++){
            ch.insert(s[i]);
        }
        if(ch.size()==s.size()) break;
    }
    cout<<year;
    return 0;
}

//7. Word

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntUp=0,cntLow=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])) cntUp++;
        else cntLow++;
    }
    if(cntUp>cntLow) transform(s.begin(),s.end(),s.begin(),::toupper);
    else transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
    return 0;
}

//8. Word Capitalization

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char ch=toupper(s[0]);
    string newStr=ch+s.substr(1);
    cout<<newStr;
}

//9. Nearly Lucky Number

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntLucky=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7') cntLucky++;
    }
    if(cntLucky==7 || cntLucky==4) cout<<"YES";
    else cout<<"NO";
    return 0;
}

//10. Stones on the Table

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sz;
    string s;
    cin>>sz>>s;
    int noOfStones=0;
    for(int i=0;i<sz-1;i++){
        if(s[i]==s[i+1]) noOfStones++;
    }
    cout<<noOfStones;
    return 0;
}
