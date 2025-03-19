import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		while(true) {
			Scanner scanner = new Scanner(System.in);
			int x = scanner.nextInt();
			int y = scanner.nextInt();
			
			if(x>=-1000&&x<=1000&&x!=0&&y>=-1000&&y<=1000&&y!=0) {
				if(x>0&&y>0) {
					System.out.println("1");
				}
				else if(x<0&&y>0) {
					System.out.println("2");
				}
				else if(x<0&&y<0) {
					System.out.println("3");
				}
				else {
					System.out.println("4");
				}
				scanner.close();
				return;
			}
			else {
				System.out.println("다시 입력해주세요.");
			}

		}
	}
}
