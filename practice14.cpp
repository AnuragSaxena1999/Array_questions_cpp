//merge two sorted array

#include<bits/stdc++.h>
using namespace std;

void mergeArray(int array1[] , int array2[] , int array3[]){
    int i = 0;
    int j =0;
    int k  = 0;
    while(i<3 && j<3){
        if(array1[i]<=array2[j]){
            array3[k]=array1[i];
            i++;
            k++;
        }
        else{
            array3[k]=array2[j];
            j++;
            k++;
        }
    }
    while(i<3){
        array3[k]=array1[i];
        i++;
        k++;
    }
    while(j<3){
        array3[k]=array2[j];
        j++;
        k++;
    }
}
void print(int array3[]){
    for (int i = 0; i < 6; i++)
    {
        cout<<array3[i]<<" ";
    }
    
}
int main(){
int array1[3] ={2,4,6};
int array2[3] = {1,3,5};
int array3[6];
mergeArray(array1 , array2, array3);
print(array3);
return 0;
}