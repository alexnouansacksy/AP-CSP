// Alex Nouansacksy
// MSOE 2015 Question 7
<<<<<<< HEAD
// 3/27/2024
=======
// 3/29/2024
>>>>>>> 7117174d7084773462bef29c739500a4bc3757c5

import java.util.*;
import static java.lang.System.out;

<<<<<<< HEAD
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
=======
class MSOE2015Prob7 {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);

        out.print("num: ");
        int num = keyboard.nextInt();

        ArrayList<Integer> tri = new ArrayList<>();

        tri.add(0);
        for (int c = 1; tri.get(c - 1) <= num; c++) tri.add((c * (c + 1)) / 2);
        tri.remove(tri.size() - 1);

        int cnt = num;

        int tri1 = 0;
        int tri2 = 0;
        int tri3 = 0;

        while (cnt != 0) {
            cnt = num;
            tri1 = tri.get(tri.size() - 1);
            cnt -= tri1;

            for (int i : tri) if (i <= cnt) tri2 = i;
            cnt -= tri2;

            for (int i : tri) if (i <= cnt) tri3 = i;
            cnt -= tri3;

            tri.remove(tri.size() - 1);
        }

        out.print(tri1 + " " + tri2 + " " + tri3);
    }
}

/*
num: 30
28 1 1
Process finished with exit code 0
 */
>>>>>>> 7117174d7084773462bef29c739500a4bc3757c5
