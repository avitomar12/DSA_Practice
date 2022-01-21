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
int temp=0;
for(int i=0;i<size/2;i++)
{
    temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
}
cout<<"output the array :" <<endl;
for(int i=0;i<size;i++){
cout<<arr[i]<<endl;
}
return 0;
}
