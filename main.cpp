#include <iostream>
using namespace std;

int main()
{
    int x,y;
    char op;
    float answer;
cout<<"right the first number ";
cin>>x;
cout<<"right the operator ";
cin>>op;
cout<<"right the second number ";
cin>>y;

 if(op == '+'){
    answer=x+y;
    cout<<answer;
}else if(op == '-'){
    answer=x-y;
    cout<<answer;
}else if(op == '*'){
    answer=x*y;
    cout<<answer;
}else if(op == '/'){
    answer=x/y;
    cout<<answer;
}else if(op == '%'){
    answer=x%y;
    cout<<answer;
}else {
cout<<"incorrect operator";
}





return 0;
}
