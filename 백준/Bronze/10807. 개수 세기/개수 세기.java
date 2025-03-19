import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		int [] array = new int[N];
		for (int i=0;i<=N-1;i++) {
			int num = scanner.nextInt();
			array[i] = num;
		}
		int search = scanner.nextInt();
		int find =0;
		for(int i=0;i<=N-1;i++) {
			if(search==array[i]) {
				find++;
			}
			if(i==N-1) {
			System.out.println(find);
			}
		}
		
	}
}
