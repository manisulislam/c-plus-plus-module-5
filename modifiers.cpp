#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="anisul ";
    string b="islam";
    //a+=b;
    //a.append(b);
    a.push_back('b');
    cout<<a<<endl;
    // push-back
    a.pop_back();

    string j="bookworld";
    //j="dook";
    //j.assign("fook");
    cout<<j<<endl;

    //erase
    //j.erase(5);
    //j.erase(5,2);
    

    //replace
    //j.replace(3,2, "as");


    j.insert(4,"anis");

    cout<<j<<endl;


    
    return 0;
}