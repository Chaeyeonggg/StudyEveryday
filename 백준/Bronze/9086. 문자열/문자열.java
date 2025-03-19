import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
    	Scanner scanner = new Scanner(System.in);
    	
    	int T = scanner.nextInt();
    	
    	
    	while(T!=0) {
    		String word = scanner.next();
    		int lastt = word.length()-1;
    		
    		char first = word.charAt(0);
    		char last = word.charAt(lastt);
    		
    		System.out.print(first);
    		System.out.println(last);
    		
    		T--;
    	}
    	
    	scanner.close();
    }
}
