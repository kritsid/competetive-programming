/*
java program that will take 2 number as input
and print there gcd using Euclidean algorithm
*/
import java.util.*;
import java.io.*;
import java.lang.*;
class GCD {
	public static int gcd(int a,int b){
		return b==0?a:gcd(b,a%b);
	}
	public static void main(String[] args){
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the first number : ");
		int num1 = scn.nextInt();
		System.out.println("Enter the Second number : ");
		int num2 = scn.nextInt();
		System.out.println("GCD : "+gcd(num1,num2));
	}
}
