// String Interview Question 16
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

    bool contains = false;
    for (int i = 0; i < sentenceLength - phraseLength + 1; i++) 
        if (sentence.substr(i, phraseLength) == phrase) contains = true; 

        
    if (contains) printf("%s is in the phrase '%s'", phrase.c_str(), sentence.c_str());
    else printf("'%s' is not in the phrase '%s'", phrase.c_str(), sentence.c_str());
    
}

/*
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\stringinterview16
Enter the sentence: oooooooooalexooooooooo
Enter the phrase: alex
alex is in the phrase 'oooooooooalexooooooooo'
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\stringinterview16
Enter the sentence: ooooooooooooooalexoooooo
Enter the phrase: hello
'hello' is not in the phrase 'ooooooooooooooalexoooooo'
*/