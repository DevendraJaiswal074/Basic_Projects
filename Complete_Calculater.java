import java.util.*;

public class Complete_Calculater {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("                     CALCULATOR          ");
        System.out.println(" 1 For ADD               |   2 For SUBTRACT");
        System.out.println(" 3 For MULTIPLICATION    |   4 For DIVIDE");
        System.out.println(" 5 FOR EXIT");

        int N_terms = 0;
        while (N_terms < 5) {
            System.out.print("Enter your choice:");
            int user = scan.nextInt();

            switch (user) {
                case 1:
                    System.out.print("How many number you want to calculate:");
                    int total = scan.nextInt();
                    int[] array = new int[total];
                    for (int i = 0; i < total; i++) {
                        System.out.print("Enter Number:");
                        array[i] = scan.nextInt();
                    }
                    int sum = 0;
                    for (int j = 0; j < total; j++) {
                        sum = sum + array[j];
                    }
                    System.out.println("\n");
                    System.out.println("AFTER ADDING THE RESULT IS = " + sum);
                    break;

                case 2:
                    System.out.print("How many number you want to calculate:");
                    int total1 = scan.nextInt();
                    int[] array1 = new int[total1];
                    System.out.println("Enter Number For SUBTRACTION ");
                    for (int i = 0; i < total1; i++) {
                        System.out.print("Enter Number:");
                        array1[i] = scan.nextInt();
                    }
                    int sum1 = array1[0];
                    for (int j = 1; j < total1; j++) {
                        sum1 = sum1 - array1[j];
                    }
                    System.out.println("\n");
                    System.out.println("AFTER SUBTRACTION THE RESULT IS = " + sum1);
                    break;

                case 3:
                    System.out.print("How many number you want to calculate:");
                    int total2 = scan.nextInt();
                    int[] array2 = new int[total2];
                    System.out.println("Enter Number For MULTIPLICATION ");
                    for (int i = 0; i < total2; i++) {
                        System.out.print("Enter Number:");
                        array2[i] = scan.nextInt();
                    }
                    int sum2 = array2[0];
                    for (int j = 1; j < total2; j++) {
                        sum2 = sum2 * array2[j];
                    }
                    System.out.println("\n");
                    System.out.println("AFTER MULTIPLICATION THE RESULT IS = " + sum2);
                    break;

                case 4:
                    System.out.print("How many number you want to calculate:");
                    int total3 = scan.nextInt();
                    float[] array3 = new float[total3];
                    System.out.println("Enter Number For DIVIDE");
                    for (int i = 0; i < total3; i++) {
                        System.out.print("Enter Number:");
                        array3[i] = scan.nextInt();
                    }
                    float sum3 = array3[0];
                    for (int j = 1; j < total3; j++) {
                        sum3 = sum3 / array3[j];
                    }
                    System.out.println("\n");
                    System.out.println("AFTER DIVIDE THE RESULT IS = " + sum3);
                    break;
            }
            if (user == 5) {
                N_terms = 5;
            } else {
                System.out.println("______________________________________________________");
                System.out.println("You Want Calculate Again..? Yes/No");
                System.out.println(" ~Press 1 for 'Yes'");
                System.out.println(" ~Press 2 for 'No'");
                System.out.println("______________________________________________________");
                System.out.print("Press- ");
                int user2 = scan.nextInt();
                if (user2 == 1) {
                    N_terms = 0;
                } else if (user2 == 2) {
                    N_terms = 5;
                    System.out.println("______________________________________________________");
                    System.out.println("                   THANK FOR USING                    ");
                }

                else {
                    System.out.println("wrong entered .....!");
                }
                System.out.println("______________________________________________________");
            }
        }
        scan.close();
    }
}
