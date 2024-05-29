// swapping by using pointers
// pointers passing through pointers

#include<iostream>
using namespace std;

/*void swap(int *aptr , int *bptr ){
    int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;
}*/
void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
}

int main(){
    /*int a = 12;
    int b = 10;
    int *aptr = &a;
    int *bptr = &b;
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;*/


// another method call by refrence 
    int a = 2 ; int b =4 ;
    swap(&a , &b);
    cout<<a<<" "<<b<<endl;
return 0;
}