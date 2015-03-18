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
	int n,total=0;
	cin >>n;
	for(int i=1;i<=((int)sqrt(n));i++) {
		total +=(1+n/i-i);
	}
	printf("%d\n",total );
	return 0;
}