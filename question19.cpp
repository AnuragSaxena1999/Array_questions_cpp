//                   POINTERS

#include<iostream>
using namespace std;
int main(){
    /*int a = 10;
    int *ptra= &a ;
   
    cout<<ptra<<endl;
    cout<<&a<<endl;
    cout<<*ptra<<endl;
    *ptra = 20;
    cout<<a<<endl;*/

   // int array[] = {10 , 20 , 30};
    //cout<<*array<<endl;

    //int *ptr = array;
    //cout<<*ptr<<endl;
    //ptr++;
    //cout<<*ptr<<endl;
    //for(int i = 0 ; i<3 ; i++){
      //  cout<<*ptr<<endl;
        //ptr++;
    //}
    //for(int i = 0 ; i<3 ; i++){
      //  cout<<*(array+i)<<endl;
        
    //}
   //             POINTER TO POINTER
   int a =10;
   int *p = &a;
   int **q = &p;
   cout<<*p<<endl;
   cout<<*q<<endl;
   cout<<**q<<endl;



return 0;
}