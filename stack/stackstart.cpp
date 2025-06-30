#include<iostream>
using namespace std;
//make the class for stack
//implement the stack with thhe use of array
class stack{
    int *arr;
    int size;
    int top;

    public:
    bool flag;
    stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
        flag=1;
    }

//push function to insert the value on stack
void push(int value){
    if(top==size-1){
        cout<<"stack overflow\n";
        return ;
    }

    else{
        top++;
        arr[top]=value;
        cout<<"pushed "<<value<<" into the stack\n";
        flag=0;
    }
};
//pop the value from stack
void pop(){
    if(top==-1){
        cout<<"stack underflow\n";
        return ;
    }
    else{
        cout<<"popped "<<arr[top]<<" from the stack\n";
        top--;
        if(top==-1){
            flag=1;
        }
    }
}
//peek
int peek(){
    if(top==-1){
        cout<<"stack is empty\n";
        return -1;
    }
    else{
        return arr[top];
    }
}
   //isempty means whether is empty or full
bool IsEmpty(){
    return top==-1;
}

//isSize
int IsSize(){
    return top+1;
}

};


//main function 
int main(){
    
    stack s(5);
    
    s.push(-1);
    
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.IsEmpty()<<endl;
    cout<<s.IsSize()<<endl;


}