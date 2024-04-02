// Alex Nouansacksy
// MSOE 2015 Question 7
// 3/27/2024

import java.util.*;
import static java.lang.System.out;

public class MSOE2015Prob7 {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int num = keyboard.nextInt();
        ArrayList<Integer> tringularInts = new ArrayList<>();
        int curr = 0;
        int cnt = 0;
        while (curr < num) {
            cnt++;
            int tri = cnt * (cnt + 1) / 2;
            tringularInts.add(tri);
        }

        

    }
}
