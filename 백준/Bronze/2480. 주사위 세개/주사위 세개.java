import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		while(true) {
			Scanner scanner = new Scanner(System.in);
			int x = scanner.nextInt();
			int y = scanner.nextInt();
			int z = scanner.nextInt();
			int money =0;
			
			if(x>=1&&x<=6&&y>=1&&y<=6&&z>=1&&z<=6) {
				if(x==y&&y==z) {
					money = 10000+(x*1000);
				}
				else if((x==y&&y!=z)||(y==z&&y!=x)||(x==z&&x!=y)) {
					if(x==y) {
						money = 1000+(x*100);
					}
					else if (x==z){
						money = 1000+ (x*100);
					}
					else {
						money = 1000+(y*100);
					}
				}
				else {
					if((x>y&&y>z)||(x>z&&z>y)) {
						money = x*100;
					}
					else if ((y>x&&x>z)||(y>z&&z>x)) {
						money = y*100;
					}
					else
						money = z*100;
				}
				System.out.println(money);
				scanner.close();
				return;
			}
			else{
				System.out.println("다시 입력해주세요.");
			}
		}
	}
}
