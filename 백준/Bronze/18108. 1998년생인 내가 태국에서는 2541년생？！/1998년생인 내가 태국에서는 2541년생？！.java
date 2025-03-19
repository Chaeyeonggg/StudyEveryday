import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        while(true) {
			Scanner scanner = new Scanner(System.in);
			int y = scanner.nextInt();
			if (y<1000 || y >3000) {
				System.out.println("다시 입력해주세요.");
			}
			else {
				int y2 = y-543;
				System.out.println(y2);
                return;
			}
		}
    }
}