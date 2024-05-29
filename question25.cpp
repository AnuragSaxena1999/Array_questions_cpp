// board game 
// find the no. of possible path from starting and ending point in game board

#include<iostream>
using namespace std;
int countpath(int s , int e){
    if (s==e){
        return 1;
    }
    if(s>e){
        return -1;
    }
    int count = 0;
    for(int i=1 ; i<=6 ; i++){ // dice have only 6 options
    count = count + countpath(s+i, e);
    }
    return count;
}

int main(){
cout<<countpath(0,3);
return 0;
}