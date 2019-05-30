#include<bits/stdc++.h>
using namespace std;
int minute(string s){
    int h=0,m=0;
    h=((int)s[0]-48)*10+((int)s[1]-48);
    return m;
}
int main(){
    string st,fi;
    cin>>st>>fi;
    int ans=0;
    ans=(minute(fi)-minute(st))/2+minute(st);
    if(ans/60<10){
        if(ans%60<10){
            cout<<0<<ans/60<<':'<<0<<ans%60;
        }else cout<<0<<ans/60<<':'<<ans%60;
    }else{
        if(ans%60<10) cout<<ans/60<<':'<<0<<ans%60;
        else cout<<ans/60<<':'<<ans%60;
    }
}
