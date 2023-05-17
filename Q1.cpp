#include <iostream>
using namespace std;
//print the count of odd and even integers present in the array.


int main(){
int arr[]={1,2,3,4,5};
int count=0;


int size=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<size;i++){

    if(arr[i]%2!=0){

        count++;
    }

}

cout<<"number of odd integers="<<count<<endl;
cout<<"number of even integers="<<size-count;



    return 0;


}