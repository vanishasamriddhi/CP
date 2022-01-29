#include <iostream>
#include <array>
#include <climits>
#define MAX_SIZE 100
 using namespace std;

 int main(){
     int n;
     cin>>n;
  int arr[MAX_SIZE];
  for(int i=0; i<n; i++){
      cin>> arr[i];
  }
  int odd=0, even=0;
  for (int i = 0; i < n; i++) {   
         if(arr[i]%2==0){
             even++;
         }
         else
         odd++;
    }  
    cout<<odd<<" "<<even<<endl;
     return 0; 
 }
 
