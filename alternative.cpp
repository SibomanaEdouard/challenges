#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
//this is to implement the alternative algorithm

  void   alternativeF(int arr[], int n){
    int temp,small,large;

    cout<<"The original array is : " <<endl;
    //this is to print to print the original array
    for(int i=0;i<n;i++){
        cout<<arr[i] <<endl;
    }

    //this is to  sort the array
    for(int i=0; i<n;i++){
        for(int j=0;j<i+1;j++){
    if(arr[i]>arr[j]){
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        
    }
        }

}

    //this is to print after sorting
    cout<<"The sorted array : "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    
}

// this is to make the alternative algorithm
cout<<"Alternative algorithm : "<<endl;
for(int i=0;i<n/2;i++){
cout<<arr[i]<<endl;
if(i!=n-1-i){
    cout<<arr[n-1-i]<<endl;
}

}

//this is to check if  it the arr is odd
if(n%2!=0){
    cout<<arr[n/2]<<endl;
}
}
int main(){

//this is to test if it works
int numbers[]={23,40,50,120,2,4,8};
int n=sizeof(numbers)/sizeof(numbers[0]);

//this is to invoke the function
alternativeF(numbers,n);

    return 0;
}