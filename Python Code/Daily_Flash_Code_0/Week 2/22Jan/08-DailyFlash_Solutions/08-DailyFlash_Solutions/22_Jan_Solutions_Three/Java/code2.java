/*
Program 2: Write a program that accepts two integers from user and prints
	   multiplication & Division of them.

	   {Note: checks for smaller divisor amongst entered number while computing division}

Input: 10 20

Output:
	Multiplication is 200
	Division is 2
*/

import java.io.*;

class Code2 {
        public static void main(String argv[]) throws IOException{

                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

                System.out.print("Input1: ");
                int num1 = Integer.parseInt(br.readLine());

                System.out.print("Input2: ");
                int num2 = Integer.parseInt(br.readLine());

                int Mul = num1*num2;
                int Div = num1>num2?num1/num2:num2/num1;

                System.out.println("Multiplication is "+Mul);
                System.out.println("Division is "+Div);
        }
}

