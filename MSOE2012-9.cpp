// Alex Nouansacksy
// MSOE 2012 Question 9
// 10/05/2023

#include <stdio.h>
#include <iostream>
using namespace std;

int easyConvert(char numeral) {
    if (numeral == 'I') return 1;
    if (numeral == 'V') return 5;
    if (numeral == 'X') return 10;
    if (numeral == 'L') return 50;
    if (numeral == 'C') return 100;
    if (numeral == 'D') return 500;
    if (numeral == 'M') return 1000; 
    return 0;
}

int main() {
    string romanNumerals;
    printf("Enter your roman numeral: ");
    getline(cin, romanNumerals);
    int result = 0;
    bool valid = true;

    for (int i = 0; i < romanNumerals.size(); i++) {
        int current = easyConvert(romanNumerals.at(i));
        if (i + 1 < romanNumerals.size()) {
        int next = easyConvert(romanNumerals.at(i+1));
        
        if (current < next) { 
            if (i - 1 >= 0) {
                int prev = easyConvert(romanNumerals.at(i-1));
                if (prev == current) valid = false;
            }
        
            if (current == next / 10 || current == next / 5 ) {
                if( current == 1 || current % 10 == 0 || current % 100 == 100){
                    result += (next - current);
                    i++;
                }
                else valid = false;
            } else valid = false;
        }
        else 
            result += current;
        } 
        else 
            result += current;
    }

    if (valid) printf("Converted number is: %d", result);
    else printf("Invalid Roman Numeral");
    
}

/*
Enter your roman numeral: I
Converted number is: 1
Enter your roman numeral: CXI
Converted number is: 111
Enter your roman numeral: MCCLXXIII
Converted number is: 1273
Enter your roman numeral: IX
Converted number is: 9
PS C:\Users\alexn\Desktop\AP-CSP> .\MSOE2012-9
Enter your roman numeral: IIX
Invalid Roman Numeral
PS C:\Users\alexn\Desktop\AP-CSP> .\MSOE2012-9
Enter your roman numeral: VC
Invalid Roman Numeral
PS C:\Users\alexn\Desktop\AP-CSP> .\MSOE2012-9
Enter your roman numeral: XC
Converted number is: 90
PS C:\Users\alexn\Desktop\AP-CSP> .\MSOE2012-9
Enter your roman numeral: IC
Invalid Roman Numeral
*/