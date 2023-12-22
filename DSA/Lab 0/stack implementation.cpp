#include <iostream>
#define max 5

using namespace std;

class stacky{
    int top, arr[max];
public:
    stacky(){
    top = -1;
    }
    void push( int var){
        if (top> max-1){
            printf("Stack Overflow!!!");
        }
        else{
            top++;
            arr[top] = var;
        }

    }
    void pop(){
        if (top<0)
        {
            cout<<"stack underflow"<<endl;
        }
        else{
        cout<<arr[top]<<" is removed"<<endl;
        top--;}

    }
    void seek(){
 cout<<"the top of stack is "<<top<<endl;
    }
};
int main()
{
    stacky s1;
    s1.push(12);
    s1.push(23);
    s1.pop();
    s1.seek();

}