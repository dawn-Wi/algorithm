import java.util.Arrays;
import java.util.Scanner;

public class Atm {
    static int number[];
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int count =scanner.nextInt();
        number = new int[count];
        for(int i=0;i<count;i++){
            number[i]= scanner.nextInt();
        }
        Arrays.sort(number);
        int sum =0;
        int sumTime=0;
        for(int i=0;i<count;i++){
            sumTime = sumTime+number[i];
            sum+= sumTime;
        }
        System.out.println(sum);
    }
}
