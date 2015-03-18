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
    int t;
    cin >>t;
    while(t--) {
        long long int std,i,remain=0,temp;
        cin >> std;
        for(i=0;i<std;i++) {
            cin >> temp;
            remain = (remain+temp)%std; // distribute one candy bag at a time if possible if not store in remain     
      }
        if(remain)
            cout <<"NO"<<endl;
        else
            cout <<"YES"<<endl;
    }
    return 0;
}