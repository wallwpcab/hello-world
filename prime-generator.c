#include<bits/stdc++.h>
using namespace std;
long long int m,n,i,j,k,t,a;
int main()
{

   scanf("%lld",&t);
   for(i=1;i<=t;++i){
        scanf("%lld %lld",&m,&n);
        for(j=m;j<=n;++j){
                if(j==1){
                    ++j;
                }
            a=0;
            for(k=2;k*k<=j;++k){
                if(j%k==0){
                    a=1;
                    break;
                }
            }
            if(a==0){
                printf("%lld\n",j);
            }
        }
        printf("\n");
   }
}
