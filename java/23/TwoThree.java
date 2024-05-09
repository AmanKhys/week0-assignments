import java.util.Scanner;
public class TwoThree{
	public static void main(String[] args){
		System.out.println("enter the size of the 2D array: ");
		Scanner myScanner = new Scanner(System.in);
		int size = myScanner.nextInt();
		System.out.println("enter the 2d array of  size: "+ size);
		int[][] arr = getArray(size, myScanner);
		System.out.println("the 2d array: ");
		displayArray(size, arr);

	}
	public static void displayArray(int size, int[][] arr) {
		for(int i = 0; i<  size; i++) {
			for(int j =0; j<size; j++) {
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
	public static int[][] getArray(int size, Scanner myScanner) {
		int[][] arr = new int[size][size];
		for(int i = 0; i<  size; i++) {
			for(int j =0; j<size; j++) {
				arr[i][j] = myScanner.nextInt();
			}
		}
		return arr;
	}
}


