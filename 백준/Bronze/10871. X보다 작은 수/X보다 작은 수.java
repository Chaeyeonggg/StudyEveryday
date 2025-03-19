import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		int X = scanner.nextInt();
		
		int [] array = new int[N];
		for (int i=0;i<=N-1;i++) {
			int num = scanner.nextInt();
			array[i] = num;
		}

		int[] array2 = new int[N];
		for(int i=0;i<=N-1;i++) {
			if(X>array[i]) {
				array2[i]=array[i];
			}
		}
		for(int i=0;i<=array2.length-1;i++) {
			if(array2[i]!=0) {
				System.out.print(array2[i]+" ");
			}
		}
	}
}
