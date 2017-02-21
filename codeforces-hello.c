#include<bits/stdc++.h>
int main(){
	int i,j,c;
	string s;
	cin>>s;
	int l;
	l=strlen(s);
	freopen("in.txt","r",stdin);
	for(i=0;i<=l;i++){
		if(s[i]==tolower(s[i])){
			//int c=0;
			c++;
		}
		if(c==0){
	        //for(i=0;i<len;i++)
			s[i]==toupper(s[i]);
			cout<<s<<endl;
		}
		else if(c==1 && s[0]==tolower(s[0])){
			s[0]=toupper(s[0]);
			//for(i=1;i<len;i++)
				s[i]=tolower(s[i]);
				cout<<s[i]<<endl;
			
		}
		else
		cout<<s<<endl;
	}
	return 0;
}











































/*#include<bits/stdc++.h>
using namespace std;
int main(){
	char string[123];
	char c[12]="hello";
	int i=0,k=0;
	scanf("%s",string);
	int lenght;
	lenght=strlen(string);
	for(i-0;i<lenght;i++){
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
*/

