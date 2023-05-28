#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    cout<<a[2]<<endl;
    cout<<a.at(4)<<endl;

    //last string
    cout<<a[a.size()-1]<<endl;
    cout<<a.back()<<endl;

    //first string
    cout<<a.front()<<endl;
    return 0;
}