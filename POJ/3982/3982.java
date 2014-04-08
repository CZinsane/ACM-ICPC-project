import java.util.*;
import java.math.*;
public class Main {
	public static void main (String []args){
		BigInteger a,b,c,d[];
		d=new BigInteger[100];
		Scanner scan=new Scanner(System.in);
		while(scan.hasNext()){
			d[0]=scan.nextBigInteger();
			d[1]=scan.nextBigInteger();
			d[2]=scan.nextBigInteger();
			for(int i=3;i<100;i++){
				d[i]=d[i-1].add(d[i-2].add(d[i-3]));
			}
			System.out.println(d[99]);
		}
	}

}