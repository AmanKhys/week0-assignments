import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		System.out.println("enter the following command to do the mathematical operations:");
		System.out.println("1 - addition");
		System.out.println("2 - substraction");
		System.out.println("3 - multiplication");
		System.out.println("4 - division");

		System.out.print("enter the command: ");
		Scanner myScanner = new Scanner(System.in);
		int command = myScanner.nextInt();

		System.out.println("enter the numbers that you want to do the operation: ");
		float a = myScanner.nextDouble();
		float b = myScanner.nextDouble();

		if (command == 1) {
			float sum = Main.add(a, b);
			System.out.println("sum: " + sum);
		} else if (command == 2) {
			float diff = Main.sub(a, b);
			System.out.println("difference: " + diff);
		} else if (command == 3) {
			float product = Main.multiply(a, b);
			System.out.println("product: " + product);
		} else if (command == 4) {
			float quotient = Main.division(a, b);
			System.out.println("quotient: " + quotient);
		} else {
			System.out.println("enter a valid command.");
		}
	}

	public float add(float a, float b) {
		return a + b;
	}

	public float sub(float a, float b) {
		return a - b;
	}

	public float multiply(float a, float b) {
		return a * b;
	}

	public float division(float a, float b) {
		if (b == 0) {
			System.out.println("division by zero error");
			System.exit(1);
		}
		return a / b;
	}
}
