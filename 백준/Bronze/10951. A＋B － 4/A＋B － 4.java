import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);

		while(scanner.hasNext()) {
			
			int A = scanner.nextInt();
			int B = scanner.nextInt();
			
			if(A>0&&A<10&&B>0&&B<10) {
				System.out.println(A+B);
			}
			else {
				scanner.close();
				return;
			}
		}
	}
}

