import java.util.*;

public class Main {
    
    public static int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b, a%b);
    }

    public static int end(int[] in,int max, int min, int t){
        
        max = gcd(min, in[t]);
        min = min*in[t]/max;
        if(t == in.length-1){
            return min;
        }

        return end(in, max, min, t+1);
    }

    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] p = new int[n];
        for(int i=0;i<n;i++){
            p[i] = sc.nextInt();
        }

        System.out.print(end(p,gcd(p[0],p[1]), p[0]*p[1]/gcd(p[0],p[1]), 2));
    }
}