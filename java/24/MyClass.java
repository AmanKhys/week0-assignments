import java.util.Scanner;

public class MyClass extends Area {
    public static void main(String[] args) {
        System.out.println("Enter your choice: ");
        System.out.println("1 - circle");
        System.out.println("2 - triangle");
        System.out.println("3 - rectangle");
        System.out.println("4 - square");

        Scanner sc = new Scanner(System.in);
        int command = sc.nextInt();

        if (command == 1) {
            System.out.println("enter one number");
            float a = sc.nextFloat();
            float area = circle(a);
            System.out.println("Area: " + area);
        } else if (command == 2) {
            System.out.println("enter two numbers");
            float a = sc.nextFloat();
            float b = sc.nextFloat();
            float area = triangle(a, b);
            System.out.println("Area: " + area);
        } else if (command == 3) {
            System.out.println("enter two numbers");
            float a = sc.nextFloat();
            float b = sc.nextFloat();
            float area = rectangle(a, b);
            System.out.println("Area: " + area);
        } else if (command == 4) {
            System.out.println("enter one number");
            float a = sc.nextFloat();
            float area = square(a);
            System.out.println("Area: " + area);
        }
    }
}
