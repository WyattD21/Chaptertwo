#include <iostream>
using namespace std;

int main()
{
   double originalPrice, markupPercentage, salesTaxRate;

   cout << "Enter the original price of the item: $";
   cin >> originalPrice;
   cout << "Enter the markup percentage(Excluding %): ";
   cin >> markupPercentage;
   cout << "Enter the sales tax rate(Excluding %): ";
   cin >> salesTaxRate;

   
   double listedPrice = originalPrice * (1 + markupPercentage / 100);
   double salesTax = listedPrice * (salesTaxRate / 100);
   double total = listedPrice + salesTax;

   cout << endl << "Orignal Price of the item:$" << originalPrice << endl;
   cout << endl << "Markup Percentage: " << markupPercentage << "%" << endl;
   cout << endl << "The listed price: " << listedPrice << endl;
   cout << endl << "Sales tax: $" << salesTax << endl;
   cout << endl << "Customer pays: $" << total << endl;
   return 0;
}
