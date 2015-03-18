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
	double total,sum = 0;
	int i=0;
	while(cin >> total) {
		sum = 0; i = 0;
		while(sum <= total) {
			sum += 1/(double)(2 + i);
			i++;
		}
		cout << i<<" cards(s)"<<endl;
	}
	return 0;
}