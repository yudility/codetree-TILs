public class Main {
    public static void main(String[] args) {
        int a = 5, b = 6, c = 7; 
        int temp;

        temp= b;
        b = a;
        a = c;
        c = temp;

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);

    }
}