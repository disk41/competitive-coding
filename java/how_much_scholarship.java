import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int r;
		Scanner s = new Scanner(System.in);
		r=s.nextInt();
		if(r>0 && r<=50){
		    System.out.println("100");
		}
		else if(r>50 && r<=100){
		    System.out.println("50");
		}
		else{
		    System.out.println("0");
		}
	}
}
