#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
string toBinary(int n){string r;while (n != 0){r += ( n % 2 == 0 ? "0" : "1" );n /= 2;}return r;}
int main(){
    int T;cin>>T;
    for(int t=0;t<T;t++){
        int N,K;cin>>N>>K;
        vi nrs(31,0);
        for(int n=0;n<N;n++){
        int A;cin>>A;string salida;salida=toBinary(A);
        for(int i=0;i<salida.size();i++){if(salida[i]=='1'){nrs[i]=nrs[i]+1;}}
        }
        int P=0;
        for(auto v:nrs){
        int a=v/K;
        if(v%K!=0){a++;}
        P=P+a;
        }
        cout<<P<<"\n";
    }

   return 0; 
}