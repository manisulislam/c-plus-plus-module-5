#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="computer";
    cout<<s.size()<<endl;
    string s1="ncaofnfoavnovnvoknevanvkaokvmneovkmnovkmnavkmavkoamv";
    cout<<s1.capacity()<<endl;
    s1.clear();
    cout<<s1<<endl;
    string a="anis";
    if(a.empty()== true) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;
    a.resize(3);
    a.resize(8, 'm');
    cout<<a<<endl;
    return 0;
}