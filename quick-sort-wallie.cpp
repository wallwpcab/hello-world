#include<iostream>
using namespace std;
int a[123];
int Partition(int p,int r){
    int x=a[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++){
        if(a[j]<=x){
            i++;
            swap(a[i],a[j]);
        }
    }
    //a[i+1]=a[r];
    swap(a[i+1],a[r]);
    return i+1;

}
int quicksort(int p,int r){
    if(p<r){
            int q=Partition(p,r);
            quicksort(p,q-1);
            quicksort(q+1,r);

    }
}
int main()
{
    int i;
    int n;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
      }
    quicksort(1,n);
    for(i=1;i<=n;i++){
        cout<<a[i]<<endl;

    }
    return 0;
}
