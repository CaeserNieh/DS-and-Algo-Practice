import java.util.LinkedList;
import java.util.Scanner;

public class UVa_10539 {
	public static void main(String[] args) {
		boolean[] primes = new boolean[1000000];
		for (int i = 2; i * i < primes.length; i++)
			if (!primes[i])
				for (int j = i * i; j < primes.length; j += i)
					primes[j] = true;
		LinkedList<Integer> P = new LinkedList<Integer>();
		for (int i = 2; i < primes.length; i++)
			if (!primes[i])
				P.add(i);
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		while (n-- > 0) {
			long lo = in.nextLong(), hi = in.nextLong();
			if (lo == 1)
				lo++;
			if (hi == 1)
				System.out.println(0);
			else {
				double lhi = Math.log(hi), llo = Math.log(lo);
				int count = 0;
				for (int i : P) {
					long m = (long) i * i;
					if (m > hi)
						break;
					double lp = Math.log(i);
					double a = Math.ceil(llo / lp);
					double b = Math.floor(lhi / lp);
					count += b - a + 1;
					if (i >= lo && i <= hi)
						count--;
				}
				System.out.println(count);
			}
		}
	}
}
