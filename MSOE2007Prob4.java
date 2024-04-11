// Alex Nouansacksy
// MSOE 2007 #4
// 4/11/2024

import java.util.*;
import static java.lang.System.out;

public class MSOE2007Prob4 {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        out.print("address: ");
        String address = keyboard.nextLine();

        String[] coords = address.split(" ");

        double y1 = Double.parseDouble(coords[0]) / 800;
        double x1= Double.parseDouble(coords[2]) / 1200;   
        double y2 = Double.parseDouble(coords[4]) / 800;
        double x2 = Double.parseDouble(coords[6]) / 1200;

        if (coords[1].equals("S")) y1 *= -1;
        if (coords[3].equals("W")) x1 *= -1;
        if (coords[5].equals("S")) y2 *= -1;
        if (coords[7].equals("W")) x2 *= -1;

        double distance = Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1-y2, 2));

        out.printf(" = %.3f miles", distance);

    }
}

/*
 * address: 100 S 25 E 310 N 445 W
 = 0.645 miles
 */