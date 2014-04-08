import java.util.*;
import java.math.*;

public class Main {
    public static void main(String[] args) {
        int i, j, k;
        Scanner in = new Scanner(System.in);
        BigInteger[][] c = new BigInteger[51][51];
        c[1][1] = BigInteger.ONE;
        c[1][0] = BigInteger.ONE;
        for (i = 2; i < 51; ++i) {
            c[i][0] = BigInteger.ONE;
            for (j = 1; j < i; ++j) {
                c[i][j] = c[i-1][j];
                c[i][j] = c[i][j].add(c[i-1][j-1]);
            }
            c[i][i] = BigInteger.ONE;
        }
        BigInteger[] f = new BigInteger[51];
        f[1] = BigInteger.ONE;
        f[2] = BigInteger.ONE;
        f[3] = BigInteger.valueOf(4);
        for (i = 4; i < 51; ++i) {
            f[i] = BigInteger.valueOf(2).pow(i*(i-1)/2);
            BigInteger t = new BigInteger("0");
            for (k = 1; k < i; ++k) {
                BigInteger tmp = new BigInteger("0");
                tmp = f[k];
                tmp = tmp.multiply(c[i-1][k-1]);
                tmp = tmp.multiply(BigInteger.valueOf(2).pow((i-k)*(i-k-1)/2));
                t = t.add(tmp);
            }
            f[i] = f[i].subtract(t);
        }
        while (in.hasNext()) {
            int n = in.nextInt();
            if (n > 0) {
                System.out.println(f[n]);
            }
        }
    }
}