// Alex Nouansacksy
// Prog130a
// 09/26/2023
#include <stdio.h>

int main() {
    printf("Enter int: ");
    int num;
    int result;
    scanf("%d", &num);
    while (num != 1) {
        if (num % 2 == 0) {
            result = num/2;
            printf("%d is even, so I take half: %d\n", num, result);
            num = result;
        } else {
            result = num * 3 + 1;
            printf("%d is odd, so I make 3n + 1: %d\n", num, result);
            num = result;
        }
    }

}
/*
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\130a
Enter int: 15
15 is odd, so I make 3n + 1: 46
46 is even, so I take half: 23
23 is odd, so I make 3n + 1: 70
70 is even, so I take half: 35
35 is odd, so I make 3n + 1: 106
106 is even, so I take half: 53
53 is odd, so I make 3n + 1: 160
160 is even, so I take half: 80
80 is even, so I take half: 40
40 is even, so I take half: 20
20 is even, so I take half: 10
10 is even, so I take half: 5
5 is odd, so I make 3n + 1: 16
16 is even, so I take half: 8
8 is even, so I take half: 4
4 is even, so I take half: 2
2 is even, so I take half: 1
*/