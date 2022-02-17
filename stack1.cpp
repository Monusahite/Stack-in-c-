#include<iostream>
using namespace std;
class stack{
    public:
    int st_arr[10];
    int top=-1;
    
    void push(int val){
        top++;
        if(top==10){
            cout<<"stack Overflow !!!"<<endl;
            top--;
            return;
        }
      st_arr[top]= val; 
    }

    void print(){
        cout<<"printing stack..,"<<endl;
       for(int i=top;i>=0;i--){
            cout<<"   "<<st_arr[i]<<endl<<"-------"<<endl;
        }
    }

    int pop(){
        if(top==-1){
            cout<<"stack Underflow !!!"<<endl;
            return -1;
        }
      int k= st_arr[top];  
      top--;
      return k;
    }
    int Top(){
        if(top==-1){
            cout<<"error"<<endl;
            return -1;
        }
        return st_arr[top];
    }
    int size(){
        return top+1;
    }
    
};
void next_greater(int a[],int n){
    stack*st = new stack();
    int nge[n]={0};
    st->push(0);
    for(int i=1;i<n;i++){
      while(st->size()>0 && a[i] > a[st->Top()]){
          int k=st->pop();
          nge[k] = a[i];
      }
      st->push(i);
    }
    while(st->size()>0){
        int k=st->pop();
        nge[k]=-1;
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}

int main(){
    
    stack* s1= new stack();
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
       cin>>a[i];
 
    next_greater(a,n);

    // span_array(a);
     
     

}