// let's see how to delete an ele from an array
#include <iostream>
using namespace std; 

void Display(int arr[],int size){
for(int i=0;i<size;i++){
cout<< arr[i]<<",";
}
}
void Deletion(int arr[],int size, int pos){
for(int i=pos; i < size ; i++){
arr[i - 1] = arr[i];
}
size = size -1 ;
}

int main (){
int arr[]= {12,54,65,78,5};
int size= sizeof(arr)/sizeof(arr[0]);
cout<<"size of the array is"<<size<<endl; 
cout<<"array before deletion" << endl;
Display(arr,size);
int pos;
cout<< "enter the pos from where you want to delete";
cin>>pos;
Deletion(arr,size,pos);
cout<<"array after deletion"<<endl;
Display(arr,size);
return 0; 
}