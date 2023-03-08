/*
  UB C Programming Unit 1 Lesson 2 Program 18
  Price Formatting
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main funtion
  //intialize variables as float
  float price1, price2, price3, price4, price5;
  
  printf("Price 1: $"); //ask for user input
  scanf("%f", &price1); //accept input and format as float
  printf("Price 2: $"); //ask for user input
  scanf("%f", &price2); //accept input and format as float
  printf("Price 3: $"); //ask for user input
  scanf("%f", &price3); //accept input and format as float
  printf("Price 4: $"); //ask for user input
  scanf("%f", &price4); //accept input and format as float
  printf("Price 5: $"); //ask for user input
  scanf("%f", &price5); //accept input and format as float

  printf("$%50.2f\n", price1); //prints price
  printf("$%50.2f\n", price2); //prints price
  printf("$%50.2f\n", price3); //prints price
  printf("$%50.2f\n", price4); //prints price
  printf("$%50.2f\n", price5); //prints price

  printf("\nProgram Complete!"); //output statement
  
  return 0;
}