#include<iostream>
using namespace std;

//                         function of sum of n numbers
/*int sum(int n){

    if(n==0){
        return 0;
    }
    int prevsum = sum(n-1);
    return n+prevsum;
}*/
//                         function of n to the power p
/*int power(int n , int p){
    if(p==0){
        return 1;
    }
    int prevpower = power(n , p-1);
    return n*prevpower;
}*/
//                          function of factorial of a number
/*int factorial(int n){
    if(n==1){
        return 1;
    }
    int prevfac = factorial(n-1);
    return n*prevfac;
}*/
//                         fumction of fibonacci series
int fibbo(int n){
    if(n==0){
        return 0 ;
    }
    if (n==1){
        return 1;
    }
    return fibbo(n-1) + fibbo(n-2); 
}
int main(){
    int n = 6;
    

    cout<<fibbo(n)<<endl;
return 0;
}