//check array is sorted and rotated

#include<bits/stdc++.h>
using namespace std;
bool checkArray(int array[] , int n){
    int count= 0;
    for(int i = 1 ; i<n;i++){
        if(array[i-1]>array[i]){
            count++;
        }
    }
    if(array[n-1]>array[0]){
        count++;
    }
    return count<=1;
}
int main(){
int array[5] ={3,4,5,1,2};
bool ans = checkArray(array, 5);
cout<<ans;
return 0;

}