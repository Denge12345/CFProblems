// 提交时去掉包信息
package CF1985.Java_Denge;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;

public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StreamTokenizer in = new StreamTokenizer(br);
        PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
        int t = 1;
        in.nextToken();
        t = (int) in.nval;
        while(t-- > 0){
            in.nextToken();
            String a = in.sval;
            in.nextToken();
            String b = in.sval;
            out.println(solve(a, b));
        }
        out.flush();
		br.close();
		out.close();
    }
    public static String solve(String a, String b){
        char[] aArr = a.toCharArray();
        char[] bArr = b.toCharArray();
        char tmp = aArr[0];
        aArr[0] = bArr[0];
        bArr[0] = tmp;
        return new String(aArr) + " " + new String(bArr);
    }
}
