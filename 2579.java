import java.util.Scanner;

public class Stairs {
    static int num;
    static int[] stairs;
    static int[] sum;

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        num = scanner.nextInt();
        stairs = new int[num + 1];
        for (int i = 1; i <= num; i++) {
            stairs[i] = scanner.nextInt();
        }
        sum = new int[num + 2];

        if(num==1){
            sum[1] = stairs[1];
            System.out.println(sum[1]);
        }
        else if(num==2){
            sum[1] = stairs[1];
            sum[2] = stairs[1] + stairs[2];
            System.out.println(sum[2]);
        }
        else if(num==3){
            sum[1] = stairs[1];
            sum[2] = stairs[1] + stairs[2];
            sum[3] = Math.max(stairs[1], stairs[2]) + stairs[3];
            System.out.println(sum[3]);
        }
        else{
            sum[1] = stairs[1];
            sum[2] = stairs[1] + stairs[2];
            sum[3] = Math.max(stairs[1], stairs[2]) + stairs[3];
            for (int i = 4; i <= num; i++) {
                sum[i] = Math.max(sum[i - 3] + stairs[i - 1], sum[i - 2]) + stairs[i];
            }
            System.out.println(sum[num]);
        }
    }
}
