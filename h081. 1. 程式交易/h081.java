import java.util.Scanner;

public class h081{
    static int MAX = 100;
    public static void main(String[] args){
        int[] data = new int[MAX];
        Scanner scanner = new Scanner(System.in);
        int n, D;
        n = scanner.nextInt();
        D = scanner.nextInt();
        for(int i = 0; i < n; i++){
            data[i] = scanner.nextInt();
        }
        scanner.close();
        int ram = data[0], ang = 0, state = 1;
        for(int i = 1; i < n; i++){
            if(state == 1 && ((data[i] - D) >= ram)){
                ang += data[i] - ram;
                ram = data[i];
                state = 0;
            }
            else if(state == 0 && ((data[i] + D) <= ram)){
                ram = data[i];
                state = 1;
            }
        }
        System.out.print(ang);
    }
}