import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class MakeCode {
    static int l, c;
    static char alphabet[];
    static boolean[] visited;

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        l=scanner.nextInt();
        c=scanner.nextInt();
        alphabet = new char[c];
        visited = new boolean[c];
        for (int i = 0; i < alphabet.length; i++) {
            alphabet[i]=scanner.next().charAt(0);
        }
        Arrays.sort(alphabet);
        word(0, 0);
    }

    static void word(int start, int count) {
        if (count == l) {
            String words="";
            int a = 0;
            int b = 0;
            for (int i = 0; i < c; i++) {
                if (visited[i]) {
                    words += alphabet[i];
                    if (alphabet[i] == 'a' || alphabet[i] == 'e' || alphabet[i] == 'o' || alphabet[i] == 'i' || alphabet[i] == 'u') {
                        a++;
                    } else {
                        b++;
                    }
                }
            }
            if (a >= 1 && b >= 2) {
                System.out.println(words);
            }


        }
        for (int i = start; i < c; i++) {
            visited[i] = true;
            word(i + 1, count + 1);
            visited[i] = false;
        }
    }

}
