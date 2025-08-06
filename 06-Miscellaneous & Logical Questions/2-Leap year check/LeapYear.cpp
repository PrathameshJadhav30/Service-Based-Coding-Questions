#include <iostream>
using namespace std;

//  check if a year is a leap year
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
      return true;
    }    
    else{
      return false;
    }
        
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
        cout << year << " is a Leap Year." << endl;
    else
        cout << year << " is NOT a Leap Year." << endl;

    return 0;
}
