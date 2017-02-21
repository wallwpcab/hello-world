#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[100000],tri=0,seg,i,j,k,n;

	scanf("%I64d",&n);
	for(int m=0;m<n;++m){
        scanf("%I64d",&a[m]);
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++)
			{
				if(a[i]+a[j]>a[k] && a[k]+a[j]>a[i] && a[i]+a[k]>a[j])
					tri=1;
					break;

			}
			if(tri==1){
            break;
            }

        }
        if(tri==1){
            break;
        }

	}


	if(tri)
		printf("YES\n");
    else
		printf("NO\n");

	return 0;
}
