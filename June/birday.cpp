
//https://www.codechef.com/LTIME96C/problems/TWINGFT
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector<long long> vi;
typedef long long ll;
int main() {
 int T;cin>>T;
 for(int i=0;i<T;i++){
     ll N,K;ll acum1=0;ll acum2=0;vi gifts;cin>>N>>K;for(int j=0;j<N;j++){ll aux;cin>>aux;gifts.push_back(aux);}
     sort(gifts.begin(),gifts.end());reverse(gifts.begin(),gifts.end());int ult=0;
     for(int z=0;z<N;z++){if(z==2*K){break;}if(z%2==0){acum1=acum1+gifts[z];}else{acum2=acum2+gifts[z];}ult=z;}
     if(ult+1<N){acum2=acum2+gifts[ult+1];}if(acum2>acum1){cout<<acum2<<"\n";}else{cout<<acum1<<"\n";}
     }
 }
