//백준에서 java 돌릴떼 class이름을 Main으로 바꾸고 돌리면 가능!

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Gear {
    public static void main(String[] args) throws IOException {
        int[][] gearState = new int[5][8];
        String[] gearNumber = new String[8];
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        for (int i = 0; i < 4; i++) {
            gearNumber = bufferedReader.readLine().split("");
            for (int j = 0; j < 8; j++) {
                gearState[i][j] = Integer.parseInt(gearNumber[j]);
            }
        }

        int k = Integer.parseInt(bufferedReader.readLine());
        while (k-- > 0) {
            StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            int wheelNumber = Integer.parseInt(stringTokenizer.nextToken());
            int rotate = Integer.parseInt(stringTokenizer.nextToken());

            boolean[] checkNumber = new boolean[3];
            for (int i = 0; i <3; i++) {
                if (gearState[i][2] == gearState[i + 1][6]) {
                    checkNumber[i] = true;
                }
            }

            if (wheelNumber == 1) {
                rotation(wheelNumber, rotate, gearState);
                if (!checkNumber[0]) {
                    rotate = changeRotate(rotate);
                    rotation(2,rotate,gearState);
                    if(!checkNumber[1]){
                        rotate = changeRotate(rotate);
                        rotation(3, rotate, gearState);
                        if(!checkNumber[2]){
                            rotate = changeRotate(rotate);
                            rotation(4,rotate,gearState);
                        }
                    }
                }
            } else if (wheelNumber == 2) {
                rotation(wheelNumber, rotate,gearState);
                if(!checkNumber[0]||!checkNumber[1]){
                    if(!checkNumber[0]){
                        rotate = changeRotate(rotate);
                        rotation(1,rotate,gearState);
                        rotate = changeRotate(rotate);
                    }
                    if(!checkNumber[1]){
                        rotate = changeRotate(rotate);
                        rotation(3,rotate,gearState);
                        if(!checkNumber[2]){
                            rotate = changeRotate(rotate);
                            rotation(4,rotate,gearState);
                        }
                    }
                }
            } else if (wheelNumber == 3) {
                rotation(wheelNumber,rotate,gearState);
                if(!checkNumber[1]||!checkNumber[2]){
                    if(!checkNumber[2]){
                        rotate = changeRotate(rotate);
                        rotation(4, rotate,gearState);
                        rotate = changeRotate(rotate);
                    }
                    if(!checkNumber[1]){
                        rotate = changeRotate(rotate);
                        rotation(2, rotate,gearState);
                        if(!checkNumber[0]){
                            rotate = changeRotate(rotate);
                            rotation(1,rotate,gearState);
                        }
                    }
                }
            } else if (wheelNumber == 4) {
                rotation(4,rotate,gearState);
                if(!checkNumber[2]){
                    rotate = changeRotate(rotate);
                    rotation(3,rotate,gearState);
                    if(!checkNumber[1]){
                        rotate=changeRotate(rotate);
                        rotation(2,rotate,gearState);
                        if(!checkNumber[0]){
                            rotate= changeRotate(rotate);
                            rotation(1, rotate,gearState);
                        }
                    }
                }
            }
        }
        int sum=0;
        if (gearState[0][0]==1){
            sum+=1;
        }
        if(gearState[1][0]==1){
            sum+=2;
        }
        if(gearState[2][0]==1){
            sum+=4;
        }
        if(gearState[3][0]==1){
            sum+=8;
        }

        System.out.println(sum);

    }

    private static void rotation(int wheelNumber, int rotate, int[][] gearState) {
        if (rotate == 1) {
            int lastNumber = gearState[wheelNumber-1][7];
            for (int i = 7; i > 0; i--) {
                gearState[wheelNumber-1][i] = gearState[wheelNumber-1][i-1];
            }
            gearState[wheelNumber-1][0] = lastNumber;
        } else if (rotate == -1) {
            int temp = gearState[wheelNumber-1][0];
            for (int i = 0; i < 7; i++) {
                gearState[wheelNumber-1][i] = gearState[wheelNumber-1][i+1];
            }
            gearState[wheelNumber-1][7] = temp;
        }
    }

    private static int changeRotate(int rotate) {
        int answer=0;
        if (rotate == 1) {
            answer = -1;
        } else if (rotate == -1) {
            answer = 1;
        }
        return answer;
    }
}

