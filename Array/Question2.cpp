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
//logic 
int min=arr[0],max=arr[0];
for(int i=0;i<size;i++){
    if(min>arr[i]){
        min=arr[i];
    }
    if(max<arr[i]){
        max=arr[i];
    }
}
cout<<"Maximum : "<<max<<endl;
cout<<"Minimum : "<<min<<endl;
return 0;
}