//multiplication of 2 different matrix (2 different 2d array)

#include<iostream>
using namespace std;
int main(){
    int n1 , n2 , n3;
    cin>>n1>>n2>>n3;
    int array1[n1][n2];
    int array2[n2][n3];
    int ans[n1][n3];
     for(int i = 0 ; i<n1 ; i++){
         for(int j=0 ; j<n2 ; j++){
             cin>>array1[i][j];
         }
     } 
     for(int i = 0 ; i<n1 ; i++){
         for(int j=0 ; j<n2 ; j++){
             cout<<array1[i][j]<<" ";
         }cout<<"\n";
     }
     for(int i = 0 ; i<n2 ; i++){
         for(int j=0 ; j<n3 ; j++){
             cin>>array2[i][j];
         }
     }
     
     for(int i = 0 ; i<n2 ; i++){
         for(int j=0 ; j<n3 ; j++){
             cout<<array2[i][j]<<" ";
         }cout<<"\n";
     }
     for(int i = 0 ; i<n1 ; i++){
         for(int j=0 ; j<n3 ; j++){
            ans[i][j] = 0;
         }
     }

     for(int i = 0 ; i<n1 ; i++){
         for(int j =0 ; j<n3 ; j++){
             for (int k=0 ; k<n2 ; k++){
                  ans[i][j] = ans[i][j] + (array1[i][k]*array2[k][j]);
             }
         }
     }

     for(int i = 0 ; i<n1 ; i++){
         for(int j=0 ; j<n3 ; j++){
             cout<<ans[i][j]<<" ";
         }cout<<"\n";
     }

    

return 0;
} 