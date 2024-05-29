#include<iostream>

using namespace std;
int countpathmaze(int n , int i , int j){//n=sides of maze 3*3 i and j are rows and columns
    if(i==n-1 && j==n-1){
        return 1;
    }
    if (i>n-1 || j>n-1){
        return 0;
    }
    return countpathmaze(n,i+1 ,j) + countpathmaze(n , i , j+1);
}
int main(){
cout<<countpathmaze(3 , 0 ,0);
return 0;
}