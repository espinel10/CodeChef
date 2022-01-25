#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >>s;

        s.pop_back();
        if(count(s.begin(),s.end(),'1') > 0)
            cout << "Yes\n";
        else
            cout <<"No\n";
    }

return 0;
}
