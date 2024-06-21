//move zeroes to the end of the array

#include<bits/stdc++.h>
using namespace std;

void moveZero(int array[] , int n){
    int i = 0;
    int j = 1;
    while(i<n-1 && j<n){
        if(array[i]==0 && array[j]!=0){
            swap(array[i] , array[j]);
            i++;
            
        }
        else if(array[i]!=0){
            i++;
        }
        j++;
    }
}
void print(int array[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}
int main(){
    int array[5] ={1, 0 , 0, 3, 5};
    moveZero(array , 5);
    print(array , 5);


return 0;
}