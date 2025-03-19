import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int T = scanner.nextInt();
		int i = 1;
		while(T!=0) {
			int A = scanner.nextInt();
			int B = scanner.nextInt();
			int sum = A+B;
			System.out.println("Case #"+i+": "+sum);
			i++;
			T--;
		}
		scanner.close();
	}
}

