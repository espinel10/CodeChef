#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vi;

int main(){
    ll T;cin>>T;

    for(ll t=0;t<T;t++){
        ll N;cin>>N;
        ll Total=0;
        vi A(N);
        for(ll i=0;i<N;i++){cin>>A[i];Total+=A[i];}
        if(N==1){cout<<"1\n";continue;}

        vi prefix(N),suffix(N);
        prefix[0]= A[0];
        for(ll i=1;i<N;i++){prefix[i]=  __gcd(prefix[i-1],A[i]);}

        suffix[N-1]=A[N-1];
        for(ll i=N-2;i>=0;i--){suffix[i]= __gcd(suffix[i+1],A[i]);}
        ll ans= Total/prefix[N-1];

        for(ll i=0;i<N;i++){
            ll x = __gcd((i -1 < 0 ? 0 : prefix[i-1]),(i +1 >= N ? 0 : suffix[i+1]));
            ans=min(ans,1 + ((Total - A[i])/x));
        }
        cout<<ans<<"\n";
    }
    

   return 0; 
}