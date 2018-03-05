import java.util.*;
public class fibonacci {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("ingrese el n: ");
		int n = scan.nextInt();		
		//float n = scan.nextFloat();
		//long n = scan.nextLong();
	
		
		int fib1 =0;
		int fib2 =1;
		//float fib1 =0;
		//float fib2 =1;
		//long fib1 =0;
		//long fib2 =1;
	
		if(n<=1) {
			System.out.println(n);
		}			
		else {
			for (int i= 2; i<=n;i++) {
				System.out.println(fib2);
				fib2=fib1+fib2;
				fib1=fib2-fib1;
			}
			}
		}
}
