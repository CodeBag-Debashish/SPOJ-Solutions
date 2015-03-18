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
std::map<long long, long long> dp;
//top down dynamic programming 
long long doller(long long n) {
    if(n == 0) return 0;
    if(dp[n] != 0) return dp[n];
    dp[n] = doller(n/2) + doller(n/3) + doller(n/4);
    if(dp[n] < n) dp[n] = n;
    return dp[n];
}
int main() {
    long long n;
    while(cin >> n) {
        cout << doller(n)<<endl;
    }
    return 0;
}