#include<bits/stdc++.h>
using namespace std;
int main(){
	char string[123];
	char c[12]="hello";
	int i=0,k=0;
	scanf("%s",string);
	int length;
	length=strlen(string);
	for(i=0;i<length;i++){
		if(string[i]==c[k]){
			k++;
		}
	}
	if(k==5){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
	
}

