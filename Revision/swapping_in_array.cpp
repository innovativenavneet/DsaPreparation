//swapping in array 
#include<iostream>
#include<utility>
using namespace std; 

//swap using using built it function
void swap_using_builtIn_function(int arr[],int size){
int a,b;
cout<<endl;
cout<<"tell me the first pos you want to swap";
cin>>a;
cout<<"tell me the second pos you want to swap";
cin>>b;
swap(arr[a],arr[b]);
cout<<endl;
}

//using display function
void Display(int arr[],int size){
for (int i=0;i<size;i++){
cout<<arr[i]<<",";
}

//now the question is how to do it without built it function 

}

void swap_using_code(int arr[]){
    cout<<"1st pos to swap the val"<<endl;
    int a;
    cin>>a;
        cout<<"2nd pos to swap the val"<<endl;
    int b;
    cin>>b;
    //core logic by initializing a temp 
    int temp = arr[b];
     arr[b] = arr[a];
     arr[a]= temp;
}
int main(){
int arr[]={12,44,55,65,48};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<"array before swap"<<endl;
Display(arr,size);
cout<<endl;
// swap_using_builtIn_function(arr,size);
swap_using_code(arr);
Display(arr,size);
return 0;
}
