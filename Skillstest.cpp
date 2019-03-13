#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

cout << " Income for Summer Job per hour " << "   ";

int Hours;
cout << "No of Hours" << "    ";
cin >> Hours;
cout << "  " << "Total Income wothout Tax: " << Hours *15.50 << endl;
cout << "  " << "Income with Tax: " <<(Hours * 15.50) - ((Hours * 15.50) * .14) << endl;
cout << "  " << "Expenses for Clothes and Accessories: " <<((Hours * 15.50) - ((Hours * 15.50) * .14)) *.1 << endl;
cout << "  " << "Expenses for School Supplies: " <<((Hours * 15.50) - ((Hours * 15.50) * .14)) *.01 << endl;
cout << "  " << "Savings Bond: " <<((Hours * 15.50) - ((Hours * 15.50) * .14)) - (((Hours * 15.50) - ((Hours * 15.50) * .14)) *.11) << endl;
cout << "  " << "Additional Savings Bond: " <<(((Hours * 15.50) - ((Hours * 15.50) * .14)) - (((Hours * 15.50) - ((Hours * 15.50) * .14)) *.11)) + (((Hours * 15.50) - (((Hours * 15.50) * .14)) - (((Hours * 15.50) - ((Hours * 15.50) * .14)) *.11)) *.5)<< endl;

_getch();
return 0;
}