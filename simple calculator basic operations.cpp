#include<iostream>
using namespace std;

int main(){
 double number1;
 double number2;
 char operation;

cout << "Enter number and operation you need to perfom" << endl;
  cin>>number1>>operation>>number2;
  
  if(operation=='+'){
  cout<<"Answer is:"<< number1 +number2 <<endl;
  }
  
  else if(operation=='-'){
    if(number1>number2){
   cout << "Answer is:"<< number1-number2<< endl;
   }
    else{
    cout << "Answer is:"<< number2-number1 << endl;
    }
  }
  
  else if(operation=='*'){
   cout << "Answer is:"<< number1*number2<< endl;
  }
  
  else if(operation=='/'){
   cout << "Answer is:"<< number1/number2 << endl;
  }
  
 else{
 cout<<"The operation entered is not compatible with the program"<<endl;
 }
  return 0;
 }