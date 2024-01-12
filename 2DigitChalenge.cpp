#include <iostream>
using namespace std;

//იპოვეთ ორნიშნა რიცხვის უდიდესი ციფრი.

int main(int argc, const char * argv[]) {
    int twoDigitNumber;
    cin >> twoDigitNumber;
    int tensDigit;
    int onesDigit;
    
    //procces with modulo operator to extract  ones digit result = dividend % divisor;10 % 2 = 1
    // for extraccting tens , dividend / 10 - > throw  tens position
    
    tensDigit = twoDigitNumber/10;
    onesDigit = twoDigitNumber % 10;
    // Check if the digits are equal
    if (tensDigit == onesDigit) {
        cout << "Both digits of " << twoDigitNumber << " are equal: " << tensDigit << endl;
    } else {
        // Find the largest digit
        int largestDigit = (tensDigit > onesDigit) ? tensDigit : onesDigit;
        
        // Output the result
        cout << "The largest digit of " << twoDigitNumber << " is: " << largestDigit << endl;
    }
    return 0;
}
 

