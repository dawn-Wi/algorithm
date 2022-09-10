import java.util.Scanner;

public class MakeOne {
    static int num;
    static int[] count;

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        num = scanner.nextInt();
        count = new int[num+1];
        count[1]=0;
        for(int i=2;i<=num;i++){
            count[i]=count[i-1]+1;
            if(i%2==0){
                count[i]=Math.min(count[i],count[i/2]+1);
            }
            if(i%3==0){
                count[i]=Math.min(count[i],count[i/3]+1);
            }
        }
        System.out.println(count[num]);

    }

}
