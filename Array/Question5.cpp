#include<iostream>
using namespace std;
int main(){
int size=0;
cout<<"Input the size of array"<<endl;
cin>>size;
int arr[size];
cout<<"Input the array :" <<endl;
for(int i=0;i<size;i++){
cin>>arr[i];
}
int pivot=0,temp=0;
for(int i=0;i<size;i++)
{
    if(arr[i]<0){
        temp=arr[pivot];
        arr[pivot]=arr[i];
        arr[i]=temp;
        pivot++;
    }
}
cout<<"output the array :" <<endl;
for(int i=0;i<size;i++){
cout<<arr[i];
}
return 0;
}
