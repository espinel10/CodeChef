#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <string> 

int main(){
int T;
string N;
bool bandera=false;
cin >> T;

for(int t=0;t<T;t++){
cin >>N;
int largo=N.size();
int i=0;
    while(i<int(largo/2)){
        int j=largo - i -1;
        if (N[i]!=N[j]){
        break;
        }else{
        i=i+1;    
        }
    }

if (i==int(largo/2)){
cout<< "wins" <<endl;
}else{
cout<< "loses" <<endl;    
}

}

return 0;
}
