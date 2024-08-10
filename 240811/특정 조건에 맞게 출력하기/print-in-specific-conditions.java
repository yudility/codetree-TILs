import java.util.Scanner;

public class Main { public static void main(String[] args) { // 여기에 코드를 작성해주세요. 

    Scanner in = new Scanner(System.in);

    int[] arr = new int[105];

    for (int i = 0; i < 105; i++) {
        arr[i] = in.nextInt();

        if ( arr[i] % 2 !=0) {
            System.out.print(arr[i]+3+ " ");
        } else if (arr[i] % 2 == 0) {
            System.out.print(arr[i]/2+ " ");
        } else if ( arr[i] == 0) {
            break;
        }
    }
}
}