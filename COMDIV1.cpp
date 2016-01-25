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


inline int gcd (int a , int b) {
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main() {
    int p,q,T;
    cin >> T;
    for(int i=0;i<T;i++) {
        scanf("%d %d",&p,&q);
        int n,cnt=0;
        if(p<q) {
            n = gcd(q,p);
        }else if(p == q) {
            n = p;
        }else {
            n = gcd(p,q);
        }
        int limit = sqrt(n);
        for(int i=1;i<=limit;i++) {
            if(n%i == 0) {
                cnt++;
                if(i != (n/i)) cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
