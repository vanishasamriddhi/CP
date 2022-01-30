#include <bits/stdc++.h>
#define MAX_SIZE 100

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
   for(int i=0; i<n;i++){
        cin>>a[i];
       
    }
    cout<<"The index that you want to delete "<<"";
    int index;
    
    cin>>index;
    if(index>=n){
        cout<<"INvalid"<<endl;
    }
    else
    for(int i=index; i<n; i++){
        a[i]=a[i+1];
    }

    for(int i=0; i<n-1;i++){
        cout<<a[i]<<" ";
    }
    

    return 0;
}
