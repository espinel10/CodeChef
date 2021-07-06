#include <bits/stdc++.h>
using namespace std;

int main(){
int T;cin>>T;
    for(int t=0;t<T;t++){
        int D,X,Y,Z;
        cin>>D>>X>>Y>>Z;
        cout<<max((X*7),((Y*D)+(Z*(7-D))))<<"\n";
    }

   return 0; 
}