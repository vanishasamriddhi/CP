#include <iostream>
#include <array>
#include <climits>
#define MAX_SIZE 100
 using namespace std;

 int main(){
     int n;
     cin>>n;
  int arr[MAX_SIZE];
  int temp=0;
  for(int i=0; i<n; i++){
      cin>> arr[i];
  }
  
  for (int i = 0; i < n; i++) {   
        for (int j = i+1; j < n; j++) {   
           if(arr[i] < arr[j]) {  
               temp = arr[i];  
               arr[i] = arr[j];  
               arr[j] = temp;  
           }   
        }   
    }  
    cout<<arr[1]<<endl;
     return 0; 
 }
 
