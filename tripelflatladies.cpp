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
    long long tt,result,k;
    cin >>tt;
    for(int i=0;i<tt;i++) {
        cin >> k;
        result = 192+250*(k-1);
        cout << result<<endl;
    }
    return 0;
}