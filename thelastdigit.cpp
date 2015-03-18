#include <iostream>
using namespace std;
#define ll long long
ll m(ll b, ll e, int m){
    ll r = 1;
    while (e > 0){
        if (e % 2 == 1)
            r = (r * b) % m;
        e = e >> 1;
        b = (b * b) % m;
    }
    return r;
}
int main() {
	int t;
	long long a,b;
	cin >> t;
	while(t--) {
		cin >>a>>b;
		cout <<m(a,b,10)<<endl;
	}
	return 0;
}