import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        Stack<Integer> st = new Stack<>(); 

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for( int i = 0 ; i < n; i++){
            String com = sc.next();

            if(com.equals("push")){
                int e = sc.nextInt();
                st.push(e);
            }else if(com.equals("size")){
                System.out.println(st.size());
            }else if(com.equals("empty")){
                if(st.isEmpty()){
                    System.out.println(1); 
                }else{
                    System.out.println(0); 
                }
            }else if(com.equals("pop")){
                if(!st.isEmpty()){
                    System.out.println(st.pop());
                }
            }else if(com.equals("top")){
                if(!st.isEmpty()){
                    System.out.println(st.peek());
                }
            }
        }
    }
}