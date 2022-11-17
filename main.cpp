//jeramiah brown 11/16/22 J00960654
//Example 5-4  Sentinel Controlled Loop  Page 278
#include<iostream>
using namespace std;
int main()
{

int SID;
double BoxesSold, Total_Box = 0;

double TotalRev;

double AvgSold;

double cost = 4.50;

int counter=0;

cout << "Enter ID number for student (-1 to stop): ";
cin >> SID;
while(SID != -1)
{

cout << "Enter number of boxes sold by " << SID << ": ";
cin >> BoxesSold;

Total_Box = Total_Box + BoxesSold;

counter = counter + 1;

cout << "Enter ID number for student (-1 to stop): ";
cin >> SID;
}

TotalRev = Total_Box * cost;

AvgSold = Total_Box / counter;
  
cout << endl << "Total Revenue = $" << TotalRev << endl;

cout << endl << "Average boxes sold by " << counter << " students = " << AvgSold << endl;
}

cout << "Enter number of boxes sold by " << SID << ": ";
cin >> BoxesSold;

Total_Box = Total_Box + BoxesSold;

counter = counter + 1;

cout << "Enter ID number for student (-1 to stop): ";
cin >> SID;
}

TotalRev = Total_Box * cost;

AvgSold = Total_Box / counter;

cout << endl << "Total Revenue = $" << TotalRev << endl;

cout << endl << "Average boxes sold by " << counter << " students = " << AvgSold << endl;
}

