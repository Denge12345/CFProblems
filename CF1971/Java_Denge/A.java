// 提交时去掉包信息
package CF1971.Java_Denge;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;

public class A {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StreamTokenizer in = new StreamTokenizer(br);
    static PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int t = 1;
        in.nextToken();
        t = (int) in.nval;
        while(t-- > 0){
            solve();
        }
        out.flush();
		br.close();
		out.close();
    }
    public static void solve() throws IOException {
        in.nextToken();
        int a = (int) in.nval;
        in.nextToken();
        int b = (int) in.nval;
        out.println(Math.min(a, b) + " " + Math.max(a, b));
    }
}
