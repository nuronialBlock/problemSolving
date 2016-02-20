import java.util.*;

public class HelloWorld {

    static List<String> list = new ArrayList<String>();
    static int z = 0;

    public static long fib(int n) {
        if(n <= 1) {
            return n;
        } else {
            if(z < 10000000) {
                z++;
                list.add("");
            }
            return fib(n-1) + fib(n-2);
        }
    }

    public static void main(String[] args) {
        // Prints "Hello, World" to the terminal window.
        int sum = 0;
        for(int i = 0 ; i < 12 ; i++){
        	sum += fib(i);
        	sum /= i;
        }
        
        //System.out.println(fib(40));
        //System.out.println(z);
        //System.out.println(list.size());
        System.out.println("Hello, world!");
    }

}
