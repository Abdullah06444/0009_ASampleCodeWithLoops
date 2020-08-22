package Beginner;

import java.util.Scanner;

public class Java0009_ASampleCodeWithLoops {

    public static void main(String[] args) {

        int number, counter = 0;
        double sum = 0;

        Scanner s = new Scanner(System.in);
        while (s.hasNextInt()) {    // eof olana kadar devam et

            number = s.nextInt();
            //if(number == -1)
            //    break;
            int i;
            boolean isPrime = true, canDivideby10 = false;

            if (number % 10 == 0)
                canDivideby10 = true;
            else
                if (number < 2)
                    isPrime = false;
                else
                    for (i = 2; i <= (float)number / 2; i++)
                    {

                        if (number % i == 0) {
                            isPrime = false;
                            break;
                        }
                    }

            if (!canDivideby10 && !isPrime)
                sum += Math.pow(number, 2);

            counter++;
            //String strDouble = String.format("%.0f", sum);
            //System.out.println("number:"+number+" counter:"+counter+" sum:"+strDouble);
        }
        String strDouble = String.format("%.0f", sum);
        System.out.print(counter+" "+strDouble);
    }
}
