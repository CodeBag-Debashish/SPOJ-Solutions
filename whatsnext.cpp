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
	int a,b,c;
	bool ok = false;
	while(ok == false) {
		cin >>a>>b>>c;
		if( (a==0)&&(b == 0)&&(c==0)) {
			ok = true;
		}else {
			if( (2*b) == a+c ) {
				cout <<"AP "<<2*c-b<<endl;
			}else {
				cout <<"GP "<<(c*c)/(float)b<<endl;
			}
		}	
	}
	return 0;
}