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

//11. Panoramix's Prediction

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n==2){
		return true;
	}
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

int nextPrime(int n){
	while(true){
		n=n+1;
		if(isPrime(n)) return n;
	}
}

int main(){
	int n1,n2;
	cin>>n1>>n2;
	if(nextPrime(n1)==n2)cout<<"YES";
	else cout<<"NO";
	return 0;
}

//12. Ultra-Fast Mathematician

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s="";
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i])s+='1';
		else s+='0';
	}
	cout<<s;
	return 0;
}

//13. Perfect Permutation

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<=1 || n%2!=0)cout<<-1;
	else{
		int a[n];
		for(int i=1;i<=n;i++){
			a[i-1]=i;
		}
		for(int i=0;i<n;i+=2){
			swap(a[i],a[i+1]);
		}
		for(int i=0;i<n;i++){
			cout<<a[i];
			if(i!=n-1)cout<<" ";
		}
	}
	return 0;
}

//14. Arrival of the General

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,mx,mn,maxInd,minInd,f=1;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	mx=*max_element(v.begin(),v.end());
	mn=*min_element(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(v[i]==mx&&f==1){
			maxInd=i;
			f=0;
		}
		if(v[i]==mn){
			minInd=i;
		}
	}
	if(minInd<maxInd) cout<<(n-1-minInd)+maxInd-1;
	else cout<<(n-1-minInd)+maxInd;
	return 0;
}

//15. Drinks

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	float s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		s+=t;
	}
	float res=s/n;
	cout<<fixed<<setprecision(12)<<res;
	return 0;
}

//16. Insomnia cure

#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,l,m,n,d,cnt=0;
	cin>>k>>l>>m>>n>>d;
	for(int i=1;i<=d;i++){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0)cnt+=1;
	}
	cout<<cnt;
	return 0;
}

//17. Cupboards

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cl=0,cr=0,mid,totTime=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		cl+=a;
		cr+=b;
	}
	if(n%2!=0) mid=n/2+1;
	else mid=n/2;
	if(cl>=mid) totTime+=n-cl;
	else totTime+=cl;
	if(cr>=mid) totTime+=n-cr;
	else totTime+=cr;
	cout<<totTime;
	return 0;
}

//18. I_love_%username%

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,mn,mx,cnt=0;
	cin>>n;
	cin>>mn;
	mx=mn;
	for(int i=0;i<n-1;i++){
		int temp;
		cin>>temp;
		if(temp>mx){
			mx=temp;
			cnt++;
		}
		if(temp<mn){
			mn=temp;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

//19. Tram

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cp=0,mxp=0,pen,pex;
	cin>>n;
	for(int i=0;i<n;i++){
		int ex,en;
		cin>>ex>>en;
		cp-=ex;
		cp+=en;
		if(cp>mxp) mxp=cp;
	}
	cout<<mxp;
	return 0;
}

//20. Helpful Maths

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	vector<char> ch;
	for(int i=0;i<s.size();i++){
		if(s[i]!='+')ch.push_back(s[i]);
	}
	sort(ch.begin(),ch.end());
	for(int i=0;i<ch.size();i++){
		cout<<ch[i];
		if(i!=ch.size()-1)cout<<'+';
	}
	return 0;
}

//21. Is your horseshoe on the other hoof?

#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> s;
	for(int i=0;i<4;i++){
		int t;
		cin>>t;
		s.insert(t);
	}
	cout<<4-s.size();
	return 0;
}

//22. Way Too Long Words

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s.size()>10)cout<<s[0]<<s.size()-2<<s[s.size()-1];
		else cout<<s;
		if(n)cout<<endl;
	}
	return 0;
}

//23. Boy or Girl
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	set<char> ch;
	for(int i=0;i<s.size();i++){
		ch.insert(s[i]);
	}
	if(ch.size()%2!=0)cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!"
;	return 0;
}

//24. Amusing Joke
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s3,sf;
	bool f=true;
	cin>>s1>>s2>>sf;
	s3=s1+s2;
	set<char> ch,tch;
	map<char,int> mt,mf;
	for(int i=0;i<s3.size();i++){
		ch.insert(s3[i]);
		mt[s3[i]]++;
	}
	for(int i=0;i<sf.size();i++){
		tch.insert(sf[i]);
		mf[sf[i]]++;
	}
	for(char x:ch){
		if(mf[x]!=mt[x]) {
			f=false;
			break;
		}
	}
	if(f&&tch.size()==ch.size()) cout<<"YES";
	else cout<<"NO";
	return 0;
}

