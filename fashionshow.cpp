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
	int n,sum,x,m;
	std::vector<int> men;
	std::vector<int> women;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> m;
		for(int j=0;j<m;j++) {
			cin >> x;
			men.push_back(x);
		}
		for(int j=0;j<m;j++) {
			cin >> x;
			women.push_back(x);
		}
		sum = 0;
		sort(men.begin(),men.end(),std::greater<int>());
		sort(women.begin(),women.end(),std::greater<int>());
		std::vector<int>::iterator ii;
		std::vector<int>::iterator jj;
		for(ii=men.begin(),jj=women.begin();ii!=men.end();ii++,jj++) {
			sum = sum + (*ii)*(*jj);
		}
		cout << sum << endl;
		men.clear() ; women.clear();
	}
	return 0;
}