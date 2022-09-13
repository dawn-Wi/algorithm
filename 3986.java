import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class GoodWord {
    static int num;
    static String[] words;
    static int count = 0;

    public static void main(String args[]) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        num = Integer.parseInt(bufferedReader.readLine());
        words = new String[num + 1];
        for (int i = 0; i < num; i++) {
            words[i] = bufferedReader.readLine();
        }
        for (int i = 0; i < num; i++) {
            checkWord(words[i]);
        }
        System.out.println(count);
    }

    static void checkWord(String word) {
        Stack<Character> stack = new Stack<>();
        Character[] arrWord = new Character[word.length()];
        for (int i = 0; i < arrWord.length; i++) {
            arrWord[i] = word.charAt(i);
        }
        stack.push(arrWord[0]);
        for (int i = 1; i < arrWord.length; i++) {
            if (stack.size() == 0) {
                stack.push(arrWord[i]);
            } else if (arrWord[i].equals(stack.peek())) {
                stack.pop();
            } else {
                stack.push(arrWord[i]);
            }
        }
        if (stack.empty()) {
            count++;
        }
    }
}
