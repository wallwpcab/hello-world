#include<iostream>
using namespace std;
//int a[123];
//int b[123];
//void  Merge(int ,int,int,int );
void Merge(int low,int mid,int high,int a[]){
    int h=low;
    int i=low;
    int j=mid+1;
    int b[123];
    while((h<=mid)&&(j<=high)){
        if(a[h]<=a[j]){
            b[i]=a[h];
            h=h+1;
        }
        else{
            b[i]=a[j];j=j+1;
        }
        i=i+1;
    }
    if(h>mid){
        for(int k=j;k<=high;k++)
        {
            b[i]=a[k];
            i=i+1;
        }
    }
    else{
        for(int k=h;k<=mid;k++){
            b[i]=a[k];
            i=i+1;
        }
    }
    for(int k=low;k<=high;k++){
        a[k]=b[k];
    }
}
void MergeSort(int low,int high,int a[]){
    if(low<high){
        int mid;
        mid=(low+high)/2;
        MergeSort(low,mid,a);
        MergeSort(mid+1,high,a);
        Merge(low,mid,high,a);
    }
}

int main(){
    int siz;

    cin>>siz;
    int a[siz];
    for(int i=0;i<siz;i++){
        cin>>a[i];
    }
    int low=0;
    int high=siz-1;
    MergeSort(low,high,a);
    for(int i=0;i<siz;i++){
        cout<<a[i];
    }

    return 0;

}
