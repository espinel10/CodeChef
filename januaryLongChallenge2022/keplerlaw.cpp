#include <iostream>
#include<bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;


int main() {
    int T;
    cin>>T;

    for(int i=0;i<T;i++){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((pow(a,2)/pow(b,2))==(pow(c,3)/pow(d,3))){
        cout<<"Yes\n";
        }else{
        cout<<"No\n";
        }
    }
}
