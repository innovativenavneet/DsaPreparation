// Insert at any place 
#include<iostream>
using namespace std; 
void Insert(int arr[],int pos, int ele, int n ){
for(int i=n-1; i>= pos;i--){
arr[i+1] = arr[i]; 
}
arr[pos]=ele;
//n = n + 1;
}

void Display(int arr[],int n){
for(int i=0;i<n;i++ ){
cout<<arr[i]<<",";
}
}

int main() {
 int n=4;
int arr[n]={12,52,78,55};
int pos = 3; 
int ele= 89;
Insert(arr,pos,ele,n);

Display(arr,n);
return 0 ; 
}