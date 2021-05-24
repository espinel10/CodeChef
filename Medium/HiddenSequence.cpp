#pragma GCC optimize ("O2,O3,Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
struct Node {int x, y, z;};

bool Solve(){
int N,K,M;
vector<Node> arr;
cin >> N >> K >>M;
 for(int i = 0 ; i < M ; ++i) {
    int x, y, z; cin >> x >> y >> z;
    arr.push_back({x, y, z});
  }
sort(arr.begin(),arr.end(),[&](Node x,Node y){return x.z <y.z;});
/////////////////////////variables//////////////////////////////////////////
int A[N];
set<int>ind;
for(int i=0;i<N;i++){ind.insert(i);A[i]=-1;}
map<int,int>memo;



for(auto v : arr){
  if(A[v.z-1]!=-1 || v.y > v.z) return false;
  A[v.z-1]=v.x;
  ind.erase(v.z-1);
  if(memo.count(v.x)==0){memo[v.x]=1;}else{memo[v.x]++;}
  int a=v.y-memo[v.x];
  if(a<1) return false;
  for(int j=0;j<a;j++){
  if(ind.size()==0)return false;
  int num= *ind.begin();
  if(num>=v.z-1) return false;
  A[num]=v.x;memo[v.x]++;ind.erase(num);
  }
}



int now=1;
set<int>used;
for(int i=N-1 ; i>=0;i--){
if(A[i]==-1){
if(used.count(now)==1){while(used.count(now)==1 && now<=K){now++;}}
if(now>K) return false;
A[i]=now;
}else{
used.insert(A[i]);
}
}

cout << "Yes\n";
for(int i = 0 ; i < N ; ++i) cout << A[i] << " \n"[i == N];
cout <<endl;
return true;
/////////////////////////////////////////////////////////////////////
}

int main(){
int t;cin >> t;
while(t--){
if(!Solve()) cout << "No\n";
}


}
