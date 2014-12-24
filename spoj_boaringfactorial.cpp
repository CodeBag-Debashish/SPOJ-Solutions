#include <iostream>
using namespace std;
#define LL long long
LL pow_mod(LL a,LL b,LL m)
{
	LL x = 1,y = a;
 	while(b>0)
 	{
  		if(b & 1) // same as b%2 == 1
   			x = (x*y)%m;  
  		y = (y*y)%m;
  		b>>=1;   // same as b = b/2
 	}
 	return x;
}
int main()
{
 	int tt;
 	cin >>tt;
 	while(tt--)
 	{
  		LL n,p,i,result =-1,temp;
  		cin >>n>>p;
  		if(n >= p)
  		{
   			cout << "0" <<endl;
   			continue;
  		}
  		for(i = n+1;i<p;i++)
  		{
   			temp = pow_mod(i,p-2,p);   
   			result = (result*temp)%p;  //starting with (n+1)^(p-2) then *(n+2)^(p-2)......*(p-1)^(p-2)
  		}
  		cout << p+result <<endl; // since minus mod is there
 	}
return 0;
}






