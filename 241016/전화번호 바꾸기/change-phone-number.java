import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.useDelimiter("-");

        int f=sc.nextInt();
        int x=sc.nextInt();
        int y=sc.nextInt();
        
        System.out.print("0"+f+"-"+y+"-"+x);

    }
}