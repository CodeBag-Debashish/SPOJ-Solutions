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

int main() {
  int T,n;
  char x[11];
  cin>>T;
  for(int i=0;i<T;i++) {
    bool ok = false;
    scanf("%d",&n);
    vector<string> vec;
    for(int i=0;i<n;i++) {
      scanf("%s",x);
      vec.push_back(x);
    } 
    sort(vec.begin(),vec.end());
    string prev = vec[0];
    for(int i=1;i<vec.size() && !ok;i++) {
      int len=prev.length();
      string cpy = vec.at(i).substr(0,len);
      if(cpy == prev) {
        printf("NO\n");
        ok = true;
        break;
      }
      prev = vec[i];
    }
    if(!ok) printf("YES\n");
  }
}
