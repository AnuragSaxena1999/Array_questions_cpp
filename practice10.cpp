// find the index of pivot element(minimum element) in an rotated sorted array

#include<bits/stdc++.h>
using namespace std;

int pivotElement(int array[] , int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        int mid  = (s+e)/2;
        if(array[mid]>=array[0]){
            s= mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}
int main(){
    int arr[7] ={7, 8, 9, 10, 1, 3, 4};
    cout<<pivotElement(arr , 7);
return 0;
}