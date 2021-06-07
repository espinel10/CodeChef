#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
    ll D,d,P,Q;
    ll acum=0;ll j=0;
    cin>>D>>d>>P>>Q;
    ll N=(D/d)-1;
    ll sumarize=(N*(N+1))/2;
    acum=((d*(D/d))*P)+(d*sumarize*Q);
    D=D-(d*(D/d));
    if(D>0){acum=acum+(D*(P+(N+1)*Q));}
    cout<<acum<<"\n";
    }
    
}

