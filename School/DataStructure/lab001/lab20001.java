import java.util.*;

class LabTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true) {
            System.err.print("echo > ");
            String cmd = sc.next();
            if(cmd.equals("quit")) {
                break;
            }
            System.out.println(cmd + " !!");
        }
        sc.close();
    }
}