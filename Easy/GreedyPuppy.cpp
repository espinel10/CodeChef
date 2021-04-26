#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <string> 

int main(){
int T;
cin >> T;

for(int t=0;t<T;t++){
long N,K;
cin >>N >>K;
long ans=-99999999999;
for(int i=1;i<=K;i++){
    if (ans<N%i){
        ans=N%i;
    }
}


cout << ans <<endl;

}

return 0;
}
