import java.util.*;

public class Main {
    public static void main(String[] args) {
        Deque<Integer> dq=new ArrayDeque<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i=1; i<=n; i++){
            dq.addLast(i);
        } 

        while(dq.size()!=1){
            dq.pollFirst();
            dq.addLast(dq.pollFirst());
        }

        System.out.print(dq.peekFirst());
    }
}