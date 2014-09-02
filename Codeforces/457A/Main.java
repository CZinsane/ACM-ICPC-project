import java.util.*;
import java.math.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader jin = new BufferedReader(new InputStreamReader(System.in));
		BigInteger fst[] = new BigInteger[2];
		BigInteger scd[] = new BigInteger[2];
		BigInteger tmp;
		fst[0] = new BigInteger("0");
		fst[1] = new BigInteger("0");
		scd[0] = new BigInteger("0");
		scd[1] = new BigInteger("0");
		String st1 = jin.readLine();
		for (int i = 0; i < st1.length(); ++i) {
			if (st1.charAt(i) == '1') {
				fst[0] = fst[0].add(BigInteger.ONE);
			}
			tmp = fst[0];
			fst[0] = fst[1];
			fst[1] = fst[1].add(tmp);
		}
		String st2 = jin.readLine();
		for (int i = 0; i < st2.length(); ++i) {
			if (st2.charAt(i) == '1') {
				scd[0] = scd[0].add(BigInteger.ONE);
			}
			tmp = scd[0];
			scd[0] = scd[1];
			scd[1] = scd[1].add(tmp);
		}
		if (fst[0].equals(scd[0]) && fst[1].equals(scd[1])) {
			System.out.println("=");
		}
		else {
			double golden_number = (Math.sqrt(5)+1)/2;
			BigDecimal a = new BigDecimal(fst[0]);
			a = a.multiply(BigDecimal.valueOf(golden_number));
			BigDecimal t = new BigDecimal(fst[1]);
			a = a.add(t);
			BigDecimal b = new BigDecimal(scd[0]);
			b = b.multiply(BigDecimal.valueOf(golden_number));
			t =new BigDecimal(scd[1]);
			b = b.add(t);
			if (a.compareTo(b) == -1) {
				System.out.println("<");
			}
			else {
				System.out.println(">");
			}
		}
	}
}