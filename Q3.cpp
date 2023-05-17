#include <iostream>
using namespace std;

int main(){

//reverse the array and print it.

    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start_index=0;
    int end_index=size-1;

    while(start_index<=end_index){
        int temp;
        temp=arr[start_index];
        arr[start_index]=arr[end_index];
        arr[end_index]=temp;

        start_index ++;
        end_index --;

    }

   

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    


    return 0;
}