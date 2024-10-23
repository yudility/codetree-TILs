import java.util.*;

public class Main {
    public static void main(String[] args) {
        Queue<Integer> q = new LinkedList<>();

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i=0; i<n; i++){
            String com = sc.next();

            if(com.equals("push")){
                int e = sc.nextInt();
                q.add(e);
            }else if(com.equals("pop")){
                if(!q.isEmpty()){
                    System.out.println(q.poll());
                }
            }else if(com.equals("size")){
                System.out.println(q.size());
            }else if(com.equals("empty")){
                if(q.isEmpty()){
                    System.out.println("1");
                }else{
                    System.out.println("0");
                }
            }else if(com.equals("front")){
                if(!q.isEmpty()){
                    System.out.println(q.peek());
                }
            }
        }
    }
}