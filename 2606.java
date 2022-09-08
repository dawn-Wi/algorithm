

import java.util.*;

public class Virus {
    static int comNum;
    static int connect;
    static int[][] map;
    static boolean[] visit;
    static int count=0;
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        comNum = scanner.nextInt();
        connect = scanner.nextInt();
        map = new int[101][101];
        visit = new boolean[101];
        for (int i = 0; i < connect; i++) {
            int key = scanner.nextInt();
            int value = scanner.nextInt();
            map[key][value] = map[value][key] = 1;
        }
        kill(1);
        System.out.println(count);
    }
  
    static void kill(int num){
        visit[num] = true;
        for(int j=1;j<=comNum;j++){
            if(map[num][j]==1 && visit[j]==false){
                count++;
                kill(j);
            }
        }
    }
}
