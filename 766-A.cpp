#include<bits/stdc++.h>
using namespace std;

int main(){
	char string[1000000],string1[1000000];
	scanf("%s%s",string,string1);
	if(strcmp(string,string1)==0)
	printf("-1\n");
	else if(strlen(string)<strlen(string1))
	printf("%d",strlen(string1));
	else if(strlen(string)>strlen(string1))
	printf("%d",strlen(string));
	else
	printf("%d",strlen(string));
	return 0;
}
