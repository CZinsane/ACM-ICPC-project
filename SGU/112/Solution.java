import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {
	public static void main(String[] args) {
		Scanner jin = new Scanner(System.in);
		int a = jin.nextInt();
		int b = jin.nextInt();
		BigInteger ab = BigInteger.valueOf(a);
		BigInteger bb = BigInteger.valueOf(b);
		BigInteger x = ab.pow(b).subtract(bb.pow(a));
		System.out.print(x.toString());
	}
}
