#include <bits/stdc++.h>
using namespace std;


typedef long long  ll;
typedef vector<long long> vi;

ll mod(ll a, ll b,ll m)
{
	if(b==0)return 1;

	if(b%2==0)
	{
		ll x=mod(a,b/2,m);
		return (x*x)%m;
	}
	else return ((ll)a%m*mod(a,b-1,m))%m;
}


int main(){

        vi chefora;
        chefora.push_back(0);
        for(ll i=1;i<10e5;i++){
            ll res = i; ll num = i;
            num/=10;
            while(num!= 0){
                res = res * 10 + num % 10;
                num/=10;
            }
            chefora.push_back(res);
        }
        
        vi pref;
        ll sum=0;
        for(auto v:chefora){
            sum+=v;
            pref.push_back(sum);
        }
    int T;cin>>T;
    for(int t=0;t<T;t++){
        ll L,R;cin>>L;cin>>R;
        cout<<mod(chefora[L],pref[R]-pref[L],1000000007)<<"\n";
    }

   return 0; 
}