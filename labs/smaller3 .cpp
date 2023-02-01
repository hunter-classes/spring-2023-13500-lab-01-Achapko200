/*
spring 2023 - Lab1B
Chapko
Anna 
Achapko200

Description: the prompt asks the user to imput three numbers and it calculates whcih of the three numbers is the smaller one. 
*/



#include <iostream>
using namespace std;

int main() {
  int firstnum;
  int secondnum;
  int thirdnum;
  cout<<"enter first number:"<<endl, cin>> firstnum;
  cout<<"enter second number:"<<endl, cin>> secondnum;
  cout<<"enter third number:"<<endl, cin>> thirdnum;
  
  if(firstnum < secondnum && firstnum < thirdnum){
    cout<<"the smallest of the three is" <<firstnum;
  } else if (secondnum < firstnum && secondnum < thirdnum){
    cout<<"the smaller of the three is" <<secondnum;
  } else if (thirdnum < firstnum && thirdnum < secondnum){
    cout<<"the smaller of the three is"<<thirdnum;
  }
  return 0; 
}