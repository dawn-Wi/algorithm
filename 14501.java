import java.util.Scanner;

public class Leave {
    static int n=0;
    static int[] t;
    static int[] p;
    public static void main(String args[]){
        Scanner scanner= new Scanner(System.in);
        n = scanner.nextInt();
        t= new int[n];
        p = new int[n];
        for(int i=0;i<n;i++){
            t[i]=scanner.nextInt();
            p[i] = scanner.nextInt();
        }
        int[] sum = new int[n+1];
        for(int i=0;i<n;i++){
            if(i+t[i]<=n){
                sum[i+t[i]]=Math.max(sum[i+t[i]],sum[i]+p[i]);
            }
            sum[i+1] = Math.max(sum[i+1],sum[i]);
        }
        System.out.println(sum[n]);
    }
}
