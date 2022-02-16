#include<iostream>
using namespace std;
class stack{
    public:
    int st_arr[10];
    int top=-1;
    
    void push(int val){
        top++;
      st_arr[top]= val; 
    }
    void print(){
        cout<<"printing stack..,"<<endl;
       for(int i=top;i>=0;i--){
            cout<<"   "<<st_arr[i]<<endl<<"-------"<<endl;
        }
    }
    int pop(){
      int k= st_arr[top];  
      top--;
      return k;
    }
    
};
int main(){
    
    stack* s1= new stack();
     s1->push(1);
     s1->push(2);
     s1->push(3);
     s1->push(4);
     cout<<s1->pop()<<endl;
     s1->print();
}