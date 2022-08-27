#include <bits/stdc++.h>
using namespace std;

int check(string &s, int i){
    int count=0;
    for(int j=i;j<s.length();j++){
        if(s[j]=='0'|| s[j]=='2'|| s[j]=='4'|| s[j]=='6'|| s[j]=='8')
            count++;
    }
    return count;
}

int main() {
	// your code goes here
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
	    int c =check(s,i);
	    cout<<c<<" ";
	}
	//return 0;
}
