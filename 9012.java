import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class ParenthesisString {
    static int num;
    static String[] stringSp;
    static Stack<String> stackSp;
    public static void main(String args[])throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        num = Integer.parseInt(bufferedReader.readLine());
        for(int i=0;i<num;i++){
            stringSp = bufferedReader.readLine().split("");
            stackSp = new Stack<>();
            boolean check = false;
            for(int j=0;j<stringSp.length;j++){
                if(stringSp[j].contains("(")){
                    stackSp.push("(");
                }else{
                    if(stackSp.isEmpty()){
                        System.out.println("NO");
                        check = true;
                        break;
                    }
                    stackSp.pop();
                }
            }
            if(check){
                continue;
            }
            if(stackSp.isEmpty()){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
