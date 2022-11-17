//jeramiah brown 11/16/22 J00960654
//Example 5-4  Sentinel Controlled Loop  Page 278
#include<iostream>
using namespace std;
int main()
{
//declare variables
int SID;
double BoxesSold, Total_Box = 0;
//total revenue
double TotalRev;
//avg # of sales
double AvgSold;
//cost per box
double cost = 4.50;
//total # of students selling
int counter=0;
//prompt user to enter SID
cout << "Enter ID number for student (-1 to stop): ";
cin >> SID;
while(SID != -1)
{
//prompt to enter # of boxes sold by that ID number
cout << "Enter number of boxes sold by " << SID << ": ";
cin >> BoxesSold;
//total Boxes
Total_Box = Total_Box + BoxesSold;
//Updating Counter
counter = counter + 1;
//prompt user to enter SID
cout << "Enter ID number for student (-1 to stop): ";
cin >> SID;
}
// total revenue
TotalRev = Total_Box * cost;
//Avg # sold by all
AvgSold = Total_Box / counter;
//output total revenue
cout << endl << "Total Revenue = $" << TotalRev << endl;
//output Average boxes sold
cout << endl << "Average boxes sold by " << counter << " students = " << AvgSold << endl;
}

cout << "Enter number of boxes sold by " << SID << ": ";
cin >> BoxesSold;
//total Boxes
Total_Box = Total_Box + BoxesSold;
//Updating Counter
counter = counter + 1;
//prompt user to enter SID
cout << "Enter ID number for student (-1 to stop): ";
cin >> SID;
}
// total revenue
TotalRev = Total_Box * cost;
//Avg # sold by all
AvgSold = Total_Box / counter;
//output total revenue
cout << endl << "Total Revenue = $" << TotalRev << endl;
//output Average boxes sold
cout << endl << "Average boxes sold by " << counter << " students = " << AvgSold << endl;
}

