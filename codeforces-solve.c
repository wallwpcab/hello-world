/*#include<stdio.h>
#include<string.h>
//using namespace std;
int main(){
	int a,b;
	int len;
	//cin>>a>>b;
	scanf("%d%d",&a,&b);
	int strin[100000]={0};
	//string s;
	int i;
	for(i=1;i<=1000;i++){
		//strin[i];
		len=strlen(strin[i]);
		if((strin[i]%b==0)&&(len==a)){
			printf("%d",strin[i]);
		}
	}
	return 0;
	
}
*/
#include<stdio.h>
int main(){
	int t;
	int a;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
	    if(360%(180-a)==0){
	    	printf("YES\n");
		
	   }
	   else{
	   	    printf("NO\n");
	   }
	}
	return 0;
	
}
/*#include<stdio.h>
int main(){
	int a;
	while(scanf("%d",&a)!=EOF){
		
		if(a==42){
			break;
		}
		printf("%d\n",a);
		
	}
	
	//break;
	return 0;
	
}
*/
