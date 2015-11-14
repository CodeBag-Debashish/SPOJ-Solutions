#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int T,cnt;
  bool ok;
  ll N;
  scanf("%d",&T);
  for(int qq=0;qq<T;qq++) {
    scanf("%lld",&N);
    ok = true;
    for (ll p_fac=2; p_fac*p_fac<=N; p_fac++) {
        cnt = 0;
        while (N%p_fac==0) {
          cnt++;
          N/=p_fac;
        }
        if(p_fac%4==3 && cnt%2==1) {
          ok = false;
          break;
        }
    }
    if(N%4==3) 
      ok = false;
    if (ok) 
      printf("Yes\n");
    else 
      printf("No\n");
  }
}
