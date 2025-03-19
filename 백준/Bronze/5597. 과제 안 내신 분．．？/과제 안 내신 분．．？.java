
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int [] attend = new int[31];
		
		for(int i=0;i<28;i++) {
			int num = scanner.nextInt();
			attend[num]=num;
		}

		for(int i=1;i<=attend.length-1;i++) {
			if(attend[i]==0) {
				System.out.println(i);
			}
		}
        scanner.close();
	}
}
