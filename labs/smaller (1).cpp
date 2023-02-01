/*
spring 2023 - Lab1A
Chapko
Anna 
Achapko200

Description: the prompt asks the user to imput two numbers and it calculates whcih of the two numbers is the smaller one. 
*/



#include <iostream>
using namespace std;

int main() {
  int firstnum;
  int secondnum;
  cout<<"enter first number:"<<endl,cin>> firstnum;
  cout<<"enter second number:"<<endl, cin>> secondnum;
  
  if(firstnum > secondnum){
    cout<<"the smallest of the two is" <<secondnum;
  } else if (firstnum < secondnum){ 
    cout<<"the smaller of the two is" <<firstnum;
  }
  cout<<endl;
  return 0; 
}