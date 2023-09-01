#include<bits/stdc++.h>

using namespace std;
void insertionsort(int arr[], int n){
     for(int i=1; i<n; i++){
     	int j=i;
     	while(j>0 && arr[j-1]>arr[j]){
     		int temp=arr[j-1];
     		arr[j-1]=arr[j];
     		arr[j]=temp;
     		j--;
     	}
     }
}
int main(){
   int n;
   cin>>n;
   int arr[]={5,3,2,5,3,3,2,1,0,1};
   insertionsort(arr,n);
   for(int i=0; i<n; i++){
   	cout<<arr[i]<<" ";
   }
   return 0;

}