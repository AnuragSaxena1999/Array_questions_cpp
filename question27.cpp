// given a 2 * n board and tile of size of 2 * 1 , count the number of ways to tile the given 
//board using these tiles

#include<iostream>
using namespace std;
int tilingways(int n){
    if (n==1){
    return 1;
    }
    if(n==0){
        return 0;
    }
    return tilingways(n-1) + tilingways(n-2); // for horizontle n-2 and vertical n-1
}
int main(){
 cout<<tilingways(4);   

return 0;
}