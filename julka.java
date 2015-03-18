import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;
public class Main {
    public static void main(String[] args) throws java.lang.Exception {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream,true);
        TaskA solver = new TaskA();
        while(solver.ok == false) { 
            solver.solve(1, in, out);
        }
        out.close();
    }
        
}
class TaskA {
    public boolean ok = false;
    public void solve(int testNumber, InputReader in, PrintWriter out) {
        int n = in.nextInt(); int x;
        ArrayList<Integer> nums = new ArrayList<Integer>();
        for(int i=0;i<n;i++) {
            x = in.nextInt();
            nums.
        }
    }
}
class InputReader {
    public BufferedReader reader;
    public StringTokenizer tokenizer;
    public InputReader(InputStream stream) {
        reader = new BufferedReader(new InputStreamReader(stream), 32768);
        tokenizer = null;
    }
    public String next() {
        while (tokenizer == null || !tokenizer.hasMoreTokens()) {
            try {
                tokenizer = new StringTokenizer(reader.readLine());
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
        return tokenizer.nextToken();
    }
    public int nextInt() {
        return Integer.parseInt(next());
    }
    public long nextLong() {
        return Long.parseLong(next());
    }
    public double nextDouble() {
        return Double.parseDouble(next());
    }
    public BigInteger nextBigInteger() {
        return BigInteger.
    }
}






