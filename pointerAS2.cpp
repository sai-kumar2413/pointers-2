/*
GW Skills pointers AS2
Q1 - Sample Input
4 3
1 2 20 30
o/p 20
*/



#include<iostream>
using namespace std;

int sumArr(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;

}

void reverseArr(int *a,int n){
    
}



int main(){

    int k,e;
    cout<<"enter size , index";
    cin>>k>>e;
    int arr[k];

    for(int &i:arr){
        cin>>i;
    }
   int *ptr=arr;
    cout<<"index value "<<*(ptr+e-1)<<endl;
    cout<<"sum of array "<<sumArr(ptr,k)<<endl;

    //to print reverse the array
    int *last=&arr[k-1];
    cout<<"reverse of array\n";
    for(int i = 0; i < k; i++)
    {
        cout<<*last<<" ";

        if (last==ptr)
        {
            break;
        }
        last--;
    }
    

    return 0;
}
