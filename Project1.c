#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int timeremaining = 15 * 60;
    printf("Timer Started!\n");
    while (timeremaining != 0) {
        int minutes = timeremaining / 60;
        int seconds = timeremaining - minutes * 60;
        printf("");
        if(seconds == 0) {
            printf("\n%d:%d0 remaining", minutes, seconds);
        } else if (seconds < 10) {
            printf("\n%d:0%d remaining", minutes, seconds);
        } else {
            printf("\n%d:%d remaining", minutes, seconds);
        }
        sleep(0.1);
        timeremaining--;
    }
    printf("\nTimer Ended!");
}