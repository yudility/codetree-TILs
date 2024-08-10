import java.util.*;

public class Main {

    // Compute the greatest common divisor (GCD) using Euclidean algorithm
    public static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    // Recursive method to compute the Least Common Multiple (LCM) of the array
    public static int end(int[] in, int max, int min, int t) {
        if (t >= in.length) {  // Ensure we are within bounds
            return min;
        }
        max = gcd(min, in[t]);
        min = min * in[t] / max;
        return end(in, max, min, t + 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
        }
        if (p.length == 1) {
            System.out.print(p[0]);
        } else {
            int lcm = end(p, gcd(p[0], p[1]), p[0] * p[1] / gcd(p[0], p[1]), 2);
            System.out.print(lcm);
        }
        sc.close();
    }
}