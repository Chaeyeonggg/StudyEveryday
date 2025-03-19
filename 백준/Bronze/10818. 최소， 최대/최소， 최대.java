import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		
		int [] A = new int[N];
		for (int i=0;i<=N-1;i++) {
			int num = scanner.nextInt();
			A[i] = num;
		}

		int min = 0;
		int max =0;

		for(int i=0;i<=N-1;i++) {
			if(A[min]>A[i]) {
				min = i;
			}
			if(A[max]<A[i]) {
				max=i;
			}
			if(i==N-1) {
				System.out.print(A[min]+ " ");
				System.out.print(A[max]);
			}
		}
		
	}
}
