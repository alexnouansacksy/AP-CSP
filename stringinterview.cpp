// String Interview Question 12
// Created by alex on 9/20/2023.
// test
#include <iostream>
using namespace std;


int main() {
    string sentence;
    char space = ' ';
    cout << "Enter the sentence: ";
    getline (cin, sentence);

    int cnt = 0;
    for (int i = 0; i < sentence.length(); i++ ) {
        if (sentence[i] == space) cnt = cnt + 1;
    }
    int length = cnt +1;
    std::string words[length];
    int start = 0;
    int index = 0;
    string substring = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == space) {
            substring = sentence.substr(start, i - start);
            words[index] = substring;
            start = i + 1;
            index++;
        }
    }
    substring = sentence.substr(start);
    words[index] = substring;
 
    for (int i = length-1; i >= 0; i--) cout << words[i] << " ";

}

/*

PS C:\Users\alexn\Desktop\AP-CSP> .\stringinterview
Enter the sentence: man i love to program in c++!
c++! in program to love i man 

*/