/*
spring 2023 - Lab1C
Chapko
Anna 
Achapko200

Description: the prompt asks the user to imput ther year and it calculates if its a leap year or not 
*/



#include <iostream>
using namespace std;

int main() {
int year;
  cout << "Enter a year: ";
  cin >> year;
 if (year % 4 !=0){
   cout<< "common year";
 } else if (year % 100 !=0){
   cout<< "leap year";
 } else if (year % 400 !=0){
   cout<< "common year";
 } else {
   cout<< "leap year";
 }
  return 0;
}