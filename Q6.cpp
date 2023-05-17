#include <iostream>
using namespace std;


/*Find the element in the array for which all the elements to its
left are smaller than it and all the elements to the right of it are larger than it*/

int LeftMinRightMax(int arr[],int size){

int prefix[size];
int suffix[size];
int big=arr[0];
int small=arr[size-1];
int element=-1;

for(int i=0;i<size;i++){
    if(arr[i]>big){
        big=arr[i];
    }

    prefix[i]=big;

}

for(int i=size-1;i>=0;i--){
    if(arr[i]<small){
        small=arr[i];
    }
    suffix[i]=small;

}

for(int i=0;i<size;i++){
    if(i!=0 && i!=size-1){
if(prefix[i]==suffix[i]){
   return element=prefix[i];
   break;
}
}
}

return element;

}

int main(){

int  arr[] ={1,6,5,7,10,8,9};

int size=sizeof(arr)/sizeof(arr[0]);

int result=LeftMinRightMax(arr,size);

if(result!=-1){
cout<<"The element which has small numbers on left and bigger number on right is=";
cout<<result;
}

else{
    cout<<"No number found which has smaller number on left and bigger numbers on right.";
}

    return 0;
}