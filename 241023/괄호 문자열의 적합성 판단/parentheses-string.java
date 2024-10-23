import java.util.*;

public class Main {
    public static void main(String[] args) {
        Stack<Character> st = new Stack<>();
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        for(int i=0;i<s.length(); i++){
            char c = s.charAt(i);
            if(c =='('){
                st.push('(');
            }
            else{
                if(st.isEmpty()){
                    System.out.println("No");
                    return;
                }
                else{
                    st.pop();
                }
            }
        }

        if(st.isEmpty()){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }

    }
}