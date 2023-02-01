/*
spring 2023 - Lab1C
Chapko
Anna 
Achapko200

Description: the prompt asks the user to imput the month and the year then it counds how many days are in there 
*/



#include <iostream>
using namespace std;

int main() {
  int year;
  int month;
  cout<<"ent the year", cin>> year;
  cout<<"enter the nmonth", cin>> month;
  if (year % 4 != 0){
    if (month ==2){
      cout<< "28 days";
    } else if (month %2 ==0 && month ==7){
      cout << "30 dyas";
    } else if ( month > 7 && month %2 ==1){
      cout<< "30 dyas";
    } else {
      cout<< "31 days";
    }
  } else if (year %100 != 0 ){
    if (month == 2 ){
      cout<< "29 dyas";
    } else if ( month == 1 || month == 3|| month == 5|| month == 7|| month == 8|| month == 10|| month == 12){
      cout<< "31 days";
    } else{
      cout<< "30 days";
    }
  } else if (year %400 ==0){
    if (month == 2){
      cout<<"28 days";
    }else if (month %2 == 0 && month <= 7){
      cout<<"30 days";
    } else if (month > 7 && month % 2 == 1){
      cout<<"30 dyas";
    } else {
      cout<<"31 days";
    }
  } else {
    if (month == 2){
      cout<<"29 days";
    } else if (month == 1|| month == 3|| month == 5|| month ==7|| month == 8|| month == 10|| month == 12){
      cout<< "31 days";
    } else {
      cout<< "30 days";
    }
  }