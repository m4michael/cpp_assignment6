#include <iostream>
using namespace std;
//find the sum of the greatest and the smallest integer present in the array.

int main(){

    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int min=arr[0];int max=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }

    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }


       
    }

    cout<<"sum of max and min element of array="<<max<<"+"<<min<<"="<<max+min;

    


    return 0;
}
