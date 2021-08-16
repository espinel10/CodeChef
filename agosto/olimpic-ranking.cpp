#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
int T;cin>>T;
for(int t=0;t<T;t++){
int A1,A2,A3,B1,B2,B3;
cin>>A1>>A2>>A3>>B1>>B2>>B3;
if(A1+A2+A3 < B1 + B2 + B3){
cout<<"2\n";
}else{
cout<<"1\n";
}
}
}
