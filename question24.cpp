// index of first and the last occurrence of elment in an array

#include<iostream>
using namespace std;
int firstocc(int array[] , int n , int i , int key){
    
    if(i==n){
        return -1;
    }
    if (array[i]==key){
        return i;
        }
    return firstocc(array , n , i+1 , key);
    
}
int lastocc(int array[] , int n , int i , int key)
{
    if(n==i){
        return -1;
    }
    if(array[i]==key){
        return i;
    }
    return lastocc(array , n , i-1 , key);
}
int main(){
int array[] = {4 , 2 , 3 , 2 , 5 , 2 , 7};
cout<<firstocc(array , 7 , 0 , 2)<<endl;
cout<<lastocc(array , 7 , 6 , 2)<<endl;
return 0;
}