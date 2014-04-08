import java.util.*;
import java.math.*;

public class Main{
	public static void main(String args[]){
		Scanner scan = new Scanner(System.in);
		BigInteger zero = new BigInteger("0");
		BigInteger ans = scan.nextBigInteger();
		while ( scan.hasNext()){
			BigInteger num = scan.nextBigInteger();
			ans = ans.add(num);
			if ( num.equals(zero))break;
		}
		System.out.println(ans.toString());
	}
}