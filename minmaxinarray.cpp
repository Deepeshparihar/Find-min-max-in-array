#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int array[n];
    for(int i=0; i<n;i++){
        cin>>array[i];
    }
    int Maxno= INT_MIN;
    int minno= INT_MAX;

    for(int i=0; i<n; i++){
        if(array[i]>Maxno){
            Maxno=array[i];
        }
        if( array[i]<minno){
           minno=array[i];
        }

    }    
        cout<<Maxno<<" "<<minno;
        return 0;

    
    }



    
