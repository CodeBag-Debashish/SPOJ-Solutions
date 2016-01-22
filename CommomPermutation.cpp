#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define r_all(x) (x).rbegin(), (x).rend()
#define inf INT_MAX
template<typename T> 
void LOG(T const& t) { 
	std::cout << t; 
}
template<typename First, typename ... Rest> 
void LOG(First const& first, Rest const& ... rest) {
	std::cout << first<<" "; LOG(rest ...);
}

char s[2][1010];
map<char, int> map1;
map<char, int> map2;
string res="";
int main() {
	ios::sync_with_stdio(false);
	while(scanf("%s",s[0]) != EOF) {
		scanf("%s",s[1]);
		res = "";
		for(int i=0;i<strlen(s[0]);i++) map1[s[0][i]]++;
		for(int i=0;i<strlen(s[1]);i++) map2[s[1][i]]++;
		for(int i=97;i<=122;i++) {
			if(map1[char(i)] != 0 && map2[char(i)] != 0) {
				int n = min(map1[char(i)] , map2[char(i)]);
				for(int j=0;j<n;j++) {
					res += char(i);
				}
			}
		}
		sort(all(res));
		cout << res << endl;
		map1.clear(); map2.clear();
	}
	return 0;
}
