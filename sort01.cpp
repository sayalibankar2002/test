#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};
void sort01(int arr[],int n){
    int l=0,r=n-1;
    int step=0;
    while(l<r){
        cout<<"step"<<step++<<endl;
        printarray(arr,n);
        cout<<endl;
        while (arr[l]==0 &&l<r)
        {
            l++;
        }
        while (arr[r]==1 && l<r)
        {
            
            r--;
        }
        if(arr[l]==1 && arr[r]==0 && l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
        }
    }
    cout<<"returning the array"<<endl;
    printarray(arr,6);

};
int main(){
    int arr[6]={0,1,1,0,1,0};
    sort01(arr,6);
    printarray(arr,6);

}