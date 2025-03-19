import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int m =1;
		if(n>=1&&n<=9) {
			while(m!=10) {
				System.out.println(n + " * "+  m + " = "+ n*m);
				m++;
			}
		}
		else {
			System.out.println("잘못된 입력입니다.");
		}
	}
}

