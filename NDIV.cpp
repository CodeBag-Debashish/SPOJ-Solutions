#include <iostream>
#include <stdio.h>
using namespace std;
int check[32000];
int prime[10000];
void shieve()
{
	//cout << check[0]<<endl;
	//cout << check[1]<<endl;
	//cout << check[2]<<endl;
	//cout << check[3]<<endl;
	//cout << check[4]<<endl;
	//cout << check[5]<<endl;
	//cout << check[6]<<endl;
	//cout << check[7]<<endl;
	//cout << check[8]<<endl;
    for(int i=3;i<=180;i+=2)
    {
        if(!check[i])
        {
            for(int j=i*i;j<=32000;j+=i)
                check[j]=1;
        }
    }
    prime[0] = 2;
    int j=1;
    for(int i=3;i<=32000;i+=2)
    {
        if(!check[i]){
            prime[j++]=i;
        }
    }
}
int main()
{
    shieve();
    int a,b,n,temp,total=1,res=0;
    scanf("%d%d%d",&a,&b,&n);
    int count=0,i,j,k;
    for(i=a;i<=b;i++)
    {
        temp=i;
        total=1;
        k=0;
        for(j=prime[k];j*j<=temp;j=prime[++k]) // j is taking the next prime numbers !
        {
            count=0;
            while(temp%j==0)
            {
                count++;
                temp/=j;
            }
            total *=count+1;
        }
        if(temp!=1)
            total*=2;
        if(total==n)
            res++;
    }
    printf("%d\n",res);
    return 0;
}