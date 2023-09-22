#include <stdio.h>

int main() {
    printf("Enter the number of copies to be printed: ");
    int copies;
    scanf("%d", &copies);

    double pricePer;
    if (copies < 100) pricePer = 0.30;
    else if (copies < 500) pricePer = 0.28;
    else if (copies < 750) pricePer = 0.27;
    else if (copies <= 1000) pricePer = 0.26;
    else pricePer = 0.25;

    double cost = pricePer * copies;
    printf("Price is copy is: $%.2f\n", pricePer);
    printf("Total cost is: $%.2f", cost);
}
/*
PS C:\Users\alexn\Desktop\AP-CSP> .\LP4-1
Enter the number of copies to be printed: 1001
Price is copy is: $0.25
Total cost is: $250.25
*/