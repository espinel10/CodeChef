#include <iostream>
#include<bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;

int main() {
    int T;
    cin>>T;

    for(int i=0;i<T;i++){
        ll N,D;
        ll infected=1;
        cin>>N>>D;
       for(int i=1 ; i<=D ; i++){
           if(i<=10){
            infected  = infected*2;
           }else{
            infected  =infected *3;
           }
           if(infected >=N){
               break;
           }
       }
       cout<<min(N,infected)<<"\n";
    }
}
