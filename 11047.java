import java.util.Scanner;

public class Coin0 {
    static int n;
    static int k;
    static int[] coin;
    static int count=0;
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        k = scanner.nextInt();
        coin = new int[n];
        for(int i=0;i<n;i++){
            coin[i]=scanner.nextInt();
        }
        for(int i=n-1;i>=0;i--){
            count += k/coin[i];
            k=k%coin[i];
        }
        System.out.println(count);
    }
}
