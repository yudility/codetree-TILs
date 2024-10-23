import java.util.*;

public class Main {
    public static void main(String[] args) {
        Queue<Integer> q = new LinkedList<>();
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        for(int i=1; i<=n; i++){
            q.add(i);
        }

        while(!q.isEmpty()){
            for(int i=0; i<k-1; i++){
                q.add(q.peek());
                q.poll();
            }
            System.out.print(q.peek()+" ");
            q.poll();
        }
        

    }
}