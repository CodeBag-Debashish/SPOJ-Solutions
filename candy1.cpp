#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <memory.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int n,result,avg;
	long long sum;
	bool ok = false;
	while(ok == false) {
		cin >> n; int x[n];
		if(n == -1) {
			ok = true;
		}else {
			sum = 0; result = 0;
			for(int i=0;i<n;i++) {
				cin >> x[i];
				sum += x[i];
			}
			if(sum%n != 0) {
				cout << -1<<endl;
			}else {
				avg = sum/n;
				for(int i=0;i<n;i++) {
					if(x[i] > avg) {
						result = result + (x[i] - avg);
					}
				}
				cout << result<<endl;
			}
		}

	}
	return 0;
}