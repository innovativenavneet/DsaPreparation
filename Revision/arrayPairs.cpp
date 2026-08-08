#include<iostream>
using namespace std ;
// array pairs 

class ArrayPairs
{
public:
   void arrayPairs(int arr[],int size){
    for(int i=0;i<size-1;i++){
    cout<<arr[i]<<","<<arr[i+1]<<endl;
    }
   };
};
 

int main (){
    ArrayPairs a;
    int arr[]= {12,24,15,13};
    int size= sizeof(arr)/sizeof(arr[0]);
    a.arrayPairs(arr,size);
    return 0;
}