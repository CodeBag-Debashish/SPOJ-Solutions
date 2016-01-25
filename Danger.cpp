#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define r_all(x) (x).rbegin(), (x).rend()
#define inf INT_MAX

#define NN 10
#define MAX_WORD_SIZE 10
using namespace std;

inline int high_bit_value(int n) {
    int val = 1;
    for(int i=0;(1<<i) <=n ;i++)
        val = (1<<i);
    return val;
}
int main() {
    char x[4];
    while(scanf("%s",x) != EOF ) {
        int n = (x[0] - '0')*10 + (x[1] - '0');
        int e = x[3] - '0';
        if(!(n||e)) break;
        while(e--) n = n*10;
        int val = n - high_bit_value(n);
        printf("%d\n",2*val + 1);
    }
    return 0;
}
