import java.util.Scanner;

class PassFail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int marks = sc.nextInt();

        if (marks >= 50) {
            System.out.println("Pass");
        } else {
            System.out.println("Fail");
        }
    }
}
