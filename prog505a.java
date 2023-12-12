// Alex Nouansacksy
// Prog 505a
// 12/12/2023

import java.util.*;

import static java.lang.System.out;

public class prog505a {

    public static int calc(int books) {
        if (books <= 3) return books * 10;
        else if (books <= 6) return 30 + (books - 3) * 15;
        else return 30 + 45 + 20 * (books - 6);
    }

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        ArrayList<String> names = new ArrayList<String>();
        ArrayList<Integer> books = new ArrayList<Integer>();
        ArrayList<Integer> points = new ArrayList<Integer>();

        out.print("Number of people: ");
        int cnt = keyboard.nextInt();
        out.println();

        for (int i = 0; i < cnt; i++) {
            out.print("First Name: ");
            String name = keyboard.next();
            
            out.print("Last Name: ");
            name = name + " " + keyboard.next();

            out.print("Books: ");
            int book = keyboard.nextInt();

            names.add(name);
            books.add(book);
            points.add(calc(book));

            out.println();
        }

        for (int i = 0; i < cnt; i++) {
            out.println(names.get(i) + "\t" + books.get(i) + "\t" + points.get(i));
        }

        keyboard.close();
    }    
}
