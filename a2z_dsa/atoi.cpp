#include <bits/stdc++.h>
using namespace std;

long long int helper (string s, int i,long long int num=0, int sign){
    if(i> s.size()  ) return sign*num;
    if(!isdigit(s[i])) return 0; 
    num = num*10 + (s[i]-'0');
    if (sign * num <= INT_MIN) return INT_MIN;
    if (sign * num >= INT_MAX) return INT_MAX;
    return helper(s, i + 1, num, sign);
}


long long int myatoi(string s, int i=0){
    while(i< s.size() && s[i]==' ') i++; // whitespaces chhut gye
    int sign =-1;
    if( s[i]=='-' ) {
    sign=-1;
    }
    return helper (s, 0, s.size(), sign)
}


int main(){
    string s = "    -00223454";
    long long int ans = myatoi(s);
    cout<<"ans"<<endl;
}