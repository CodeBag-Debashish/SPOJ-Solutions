#include <bits/stdc++.h>
using namespace std;
bool isPrime[1000000];
int prime[78498];
typedef long long ll;
int main() {
	memset(isPrime,true,sizeof isPrime);
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < 1000000; i++)
		if(isPrime[i])
			for(int j = i * 2; j < 1000000; j += i)
				isPrime[j] = false;
 
	int cnt = 0;
	for(int i = 0; i < 1000000; i++)
		if(isPrime[i])
			prime[cnt++] = i;
 
	int T;
	cin >> T;
	for(int qq=0;qq<T;qq++) {
		ll x;
		cin >> x;
		bool valid = true;
		for(int i = 0; i < cnt && 1LL * prime[i] * prime[i] <= x && valid; i++) {
			int mult = 0;
			while(x % prime[i] == 0) {
				x /= prime[i];
				mult++;
			}
			valid = !(prime[i] % 4 == 3 && mult % 2 == 1);
		}
		valid &= x % 4 != 3;
		
		if(valid) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
