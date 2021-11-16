#include <iostream>
using namespace std;

int main()
{
    cout<<"whant to calculate (yes/no) :";
string chois;
cin>>chois;
while(chois=="yes"){
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
cout<<endl<<"whant another one(yes/no) :";
cin>>chois;
}




return 0;
}
//by assoli99 in github
