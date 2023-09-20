sentence = input("enter the sentence: ")
words = sentence.split(" ")
length = len(words)
words.reverse()
print(*words)

''' NOTES
 THIS ONE PUTS IT IN A DIFFERENT LINE EACH TIME
 for x in words:
     print(x)

THIS ONE PUTS IT ON THE SAME LINE BUT LOOKS WEIRD, THE ONE I DID IN THE REAL CODE LOOKS BETTER
 for x in words:
     print(x,end=" ")
'''

''' OUTPUT 
enter the sentence: Java is best programming language
language programming best is Java

Process finished with exit code 0
'''