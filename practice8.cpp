// binarysearch (for binary search array should be sorted)

#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[] , int n , int key){
        int s= 0;
        int e = n;
        while (s<=e)
        {
            int mid = (s+e)/2;
            if(array[mid]==key){
                return mid;
            }
            else if(array[mid]>key){
                e = mid-1;
            }
            else if(array[mid]<key){
                s = mid+1;
            }
        }
    return -1;
}
int main(){
    int n ;
    cin>>n;
    int array[n];
    for(int i = 0; i<n ; i++){
        cin>>array[i];
    }
    for(int i = 0; i<n ; i++){
        cout<<array[i]<<" ";
    }
    int key;
    cout<<"enter the value of key:";
    cin>>key;
    int answer = binarySearch(array , n , key);
    if(answer != -1){
        cout<<"element is found at"<<answer<<"index";
    }else{
        cout<<"Element not found";
    }
return 0;
}