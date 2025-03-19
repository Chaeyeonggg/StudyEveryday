import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);

		int N = scanner.nextInt();
		int M = scanner.nextInt();
		
		int [] arr = new int[N+1];
		
		for(int a=0;a<M;a++) {
			int i = scanner.nextInt();
			int j = scanner.nextInt();
			int k = scanner.nextInt();
			
			for(int b=i;b<=j;b++) {
				arr[b]=k;
			}
		}
		
		for(int i=1;i<arr.length;i++) {
			System.out.print(arr[i]+" ");
		}
	
		scanner.close();
	}
}
