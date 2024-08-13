import java.util.Scanner;

public class Main { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i = 1; i<=n; i++ ){
            int t=i; 
            boolean flag=false; // 각 자리수에 3, 6, 9 가 들어간다면 true로 변경
            
            while(t>0){
                if((t%10)!=0 && (t%10)%3 ==0) {// 일의 자리가 0이 아니고, 3의 배수(3, 6, 9)라면
                    flag=true;
                    break;
                }
                t=t/10; // 그 다음 자리 수로 넘어감
            }

            if(i%3==0 || flag){
                System.out.print("0 ");
            }
            else{
                System.out.print(i+" ");
            }
        }
    }
}