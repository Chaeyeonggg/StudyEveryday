import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		double x = scanner.nextDouble();
		int n = scanner.nextInt();
		
		double sum =0;
		while(n!=0) {
			int a = scanner.nextInt();
			int b = scanner.nextInt();
			sum+=a*b;
			n--;
		}
		if (sum==x) {
			System.out.println("Yes");
		}
		else {
			System.out.println("No");
		}

		scanner.close();
	}
}

