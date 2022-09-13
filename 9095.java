import java.util.Scanner;

public class AddOneTwoThree {
    static int num;
    static int[] count;
    static int[] number;
    public static void main(String args[]){
        Scanner scanner= new Scanner(System.in);
        num = scanner.nextInt();
        number=new int[12];
        count = new int[12];
        for(int i=0;i<num;i++){
            number[i]=scanner.nextInt();
        }
        for(int i=0;i<num;i++){
            culNum(number[i]);
        }
    }
    static void culNum(int checkNum){

        count[1]=1;
        count[2]=2;
        count[3]=4;
        for(int i=4;i<11;i++){
            count[i]=count[i-3]+count[i-2]+count[i-1];
        }
        System.out.println(count[checkNum]);
    }
}
