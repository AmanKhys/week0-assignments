import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner myScanner = new Scanner(System.in);
        System.out.println("Enter an integer: ");
        int number = myScanner.nextInt();
        boolean check = true;

        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                check = false;
                break;
            }
        }
        if (check) {
            System.out.println("the given number is a prime number");
        } else {
            System.out.println("the given number is not a prime number:");
        }
        myScanner.close();
    }
}
