#include <iostream>
#include <climits>
using namespace std;

/*find the minimum  elements from twoarrays ,find sum of two elements such
that they belong to different arrays and are not at the same index.*/



int sumOfMin(int a[],int b[],int n){

    int minA=a[0];
    int minB=b[0];
    int index1,index2;

    for(int i=1;i<n;i++){

        if(a[i]<minA){
            minA=a[i];
            index1=i;
        }

    }

    for(int j=1;j<n;j++){
        if(b[j]<minB){
            minB=b[j];
            index2=j;
        }
    }

    if(index1!=index2){
        cout<<"minA+minB="<<minA<<"+"<<minB<<"=";
      return  minA+minB;
    }
else{
    int minA2=INT_MAX;
    int minB2=INT_MAX;

    for(int i=0;i<n;i++){
        if(i!=index1 && a[i]<minA2){
            minA2=a[i];
            index1=i;
        }
    }

    for(int j=0;j<n;j++){

        if(j!=index2 && b[j]<minB2 && b[j]>minA2 ){
            minB2=b[j];
            index2=j;
        }
    }
    cout<<"minA2+minB2="<<minA2<<"+"<<minB2<<"=";

    return minA2+minB2;}

}

int main(){

   int a[]={5,6,10,4,9};
   int b[]={1,2,3,4,5};
   int size=sizeof(a)/sizeof(a[0]);
   
   int sum=sumOfMin(a,b,size);

   cout<<sum;




return 0;

}