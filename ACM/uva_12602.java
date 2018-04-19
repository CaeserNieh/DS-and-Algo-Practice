//uva_12602
public class uva_12602{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String ans[] = new String[2];
		int temp;
		int str_number = 0;
		int times = scan.nextInt();
		for(int i = 0;i<times;i++){
			String str = scan.next();
			ans[] = str.split("-");
			temp = Integer.parseInt(ans[1]);
			int num = 1;
			for(int j = 2; j>=0 ;j--){
				str_number = str_number + ((ans[0].charAt(j)-'A')*num) ;
				num = num*26;
			}
			if(str_number - temp >=100 || str_number - temp <= -100){
				System.out.println("nice");
			}
			else{
				System.out.println("not nice");
			}
		}
	}
}