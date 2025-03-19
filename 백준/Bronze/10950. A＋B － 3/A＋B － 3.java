import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		int i =1;
		
		while(t!=0) {
			int a = scanner.nextInt();
			int b = scanner.nextInt();
			if(a>0&&a<10&&b>0&&b<10)
				t--;
			System.out.println(a+b);
		}
	}
}

