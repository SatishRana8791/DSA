#include<iostream>
using namespace std;

int main()
{
    //int arr[5]={1,2,3,4,5};
    //int *ptr=arr;
    //cout<<*ptr<<endl;
//
    //char name='a';
    //char *ptr1=&name;
    //cout<<*ptr1<<endl;
    //cout<<(void*)&name<<endl;
    //cout<<(void*)ptr1;
    //cout<<static_cast<void*>(arr);
    
    //*ptr=5;
    //int *ptr= new int;
    //cout<<*ptr<<endl;
//
    //float *ptr2= new float;
    //*ptr2=3.5;
    //cout<<*ptr2<<endl;
    ////take user input
    //cout<<"take the user input:";
    //int n;
    //cin>>n;
    //int *ptr3= new int[n];
//
    //for(int i=0;i<n;i++){
    //     ptr3[i]=i+1;
    //    cout<<ptr3[i]<<endl;
    //}
    //cout<<*ptr3;
    //
    ////delete the memory allocated to pointer
    //delete ptr;

    int n=10;
    int *ptr=&n;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;
    ***ptr2=***ptr2+5;
    cout<<***ptr2<<endl;

    **ptr1=**ptr1+19;
    cout<<**ptr1;





}   

       
    