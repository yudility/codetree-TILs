import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Deque<Integer> dq = new ArrayDeque<>();

        int n = sc.nextInt();

        for(int i=0; i<n; i++){
            String com = sc.next();

            if(com.equals("push_front")){
                int e = sc.nextInt();
                dq.addFirst(e);
            }else if(com.equals("push_back")){
                int e = sc.nextInt();
                dq.addLast(e);
            }
            else if(com.equals("pop_front")){
                if(!dq.isEmpty()){
                    System.out.println(dq.pollFirst());
                }
            }
            else if(com.equals("pop_back")){
                if(!dq.isEmpty()){
                    System.out.println(dq.pollLast());
                }
            }
            else if(com.equals("size")){
                System.out.println(dq.size());
            }
            else if(com.equals("empty")){
                if(dq.isEmpty()){
                    System.out.println(1);
                }else{
                    System.out.println(0);
                }
            }
            else if(com.equals("front")){
                if(!dq.isEmpty()){
                    System.out.println(dq.peekFirst());
                }
            }
            else if(com.equals("back")){
                if(!dq.isEmpty()){
                    System.out.println(dq.peekLast());
                }
            }
        }

    }
}