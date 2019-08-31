// Name: Jong Kevin Kim
// This program calculates the tax and tip on a restaurant bill.

#include<iostream>

int main()
{
  double tax, tip, meal_cost, bill;

  //Total cost of meal cost.
  std::cout<< "Welcome to the Restaurant Bill Calculator!\n";
  std::cout<< "What is the total meal cost? $";
  std::cin>> meal_cost;

  //Calculate the tax.
tax = meal_cost * 0.0775;

  std::cout<< "Tax:        $" << tax << std::endl;

  //Calculate the tip.
tip = meal_cost * 0.2;

  std::cout<< "Tip:        $" << tip << std::endl;

  //Calculate the bill.
bill = meal_cost + tax + tip;

  std::cout<< "Total Bill: $" << bill << std::endl;

  return 0;
}
