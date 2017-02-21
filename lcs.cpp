#include<bits/stdc++.h>
using namespace std;
int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
if (m == 0 || n == 0)
	return -1;
if (X[m-1] != Y[n-1])
	return 1 + lcs(X,Y,m-1,n-1);
else
	return max(lcs(X,Y,m,n-1), lcs(X, Y, m-1, n));
}
/* Utility function to get max of 2 integers */
int max(int a, int b)
{
	return (a > b)? a : b;
}

/* Driver program to test above function */
int main()
{
char X[123]={0};
char Y[234]={0};
scanf("%s%s",X,Y);
int m = strlen(X);
int n = strlen(Y);

printf("%d\n", lcs( X, Y, m, n )+1);

return 0;
}
