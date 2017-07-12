import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
      // int a,b,n;
       
        BigInteger a= in.nextBigInteger();
      BigInteger b = in.nextBigInteger();
       int n=in.nextInt(),i;
         BigInteger c;

        for(i=2;i<n;i++)
            {
            c=b.multiply(b).add(a);
            a=b;
            b=c;
        }
        System.out.println(b);
    }
}
