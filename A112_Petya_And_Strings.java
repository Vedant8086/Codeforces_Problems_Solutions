import java.lang.*;
import java.util.*;;
public class A112_Petya_And_Strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();

        if(s1 == s2) {
            System.out.println("0");
        }
        else if(s1>s2) {
            System.out.println("1");
        }
        else if(s1<s2) {
            System.out.println("-1");

        }
        sc.close();
    }
}