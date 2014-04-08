import java.util.*;
import java.math.*;
public class Main{
	public static void main(String args[]){
		Scanner scan = new Scanner(System.in);
		while(scan.hasNext()){
			BigDecimal m = scan.nextBigDecimal();;
			int i,n;
			n = scan.nextInt();
			m = m.pow(n);
			String ans = m.toPlainString();
			int st = 0,ed = ans.length()-1;
			while(ans.charAt(st)=='0')st++;
			while(ans.charAt(ed)=='0')ed--;
			if(ans.charAt(ed)=='.')ed--;
			for(i=st;i<=ed;i++)System.out.print(ans.charAt(i));
			System.out.println();
		}
	}
}