// MSOE 2008 #6
// Alex Nouansacksy
// 10/03/2023

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    string sentence;
    string phrase;


    printf("Enter the sentence: ");
    getline(cin, sentence);
    printf("Enter the phrase: ");
    getline(cin, phrase);

    int sentenceLength = sentence.size();
    int phraseLength = phrase.size();

    int cnt = 0;
    for (int i = 0; i < sentenceLength - phraseLength + 1; i++) 
        if (sentence.substr(i, phraseLength) == phrase) cnt ++ ; 

        
    printf("'%s' is in the sentence %d times", phrase.c_str(), cnt);
    
}
/*
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\MSOE2008-6
Enter the sentence: iiialexiiiialexiialexiialexialex
Enter the phrase: alex
'alex' is in the sentence 5 times
*/