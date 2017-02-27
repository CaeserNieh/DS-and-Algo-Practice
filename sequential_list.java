import java.util.Scanner;


class  DATA{
	String key;
	String name;
	int age;
}

class SLType{
	static final int MAXLEN = 100;
	DATA[] listdata = new DATA[MAXLEN+1];
	int listlen;

	void SLinit(SLType sl){
		sl.listlen = 0;
	}
	
	int SLlength(SLType sl){
		return sl.listlen;
	}
	
	int SLinsert(SLType sl, int n , DATA data){
		int i;
		
		if(sl.listlen >= MAXLEN){
			System.out.println("Full");
			return 0;
		}
		
		if(n < 1 || n > sl.listlen-1){
			System.out.println("Wrong!!!");
			return 0;
		}
		
		for(i = sl.listlen;i >= n;i--){
			sl.listdata[i+1] = sl.listdata[i];
		}
		
		sl.listdata[n] = data;
		sl.listlen++;
		return 1;
	}
	
	int SLadd(SLType sl, DATA data){
		if(sl.listlen >= MAXLEN){
			System.out.println("FULL");
			return 0;
		}
		sl.listdata[++sl.listlen] = data;
		return 1;
	}
	
	int SLdelete(SLType sl, int n){
		int i;
		if(n < 1 || n > sl.listlen+1){
			System.out.println("Wrong!!!");
			return 0;
		}
		for(i = n;i<sl.listlen;i++){
			sl.listdata[i] = sl.listdata[i+1];
		}
		sl.listlen--;
		return 1;
	}
	
	DATA SLfindbynum(SLType sl, int n){
		if(n < 1 || n > sl.listlen+1){
			System.out.println("Wrong!!!");
			return null;
		}
		return sl.listdata[n];
	}
	
	int SLfindbycont(SLType sl, String key){
		int i;
		for(i = 1;i<=sl.listlen;i++){
			if(sl.listdata[i].key.compareTo(key) == 0){
				return i;
			}
		}
		return 0;
	}
	
	int SLall(SLType sl){
		int i;
		for(i = 1;i<=sl.listlen;i++){
			System.out.printf("(%s,%s,%s)\n",sl.listdata[i].key,sl.listdata[i].name,sl.listdata[i].age);
		}
		return 0;
	}
	
}//SlType


public class sequential_list {
	public static void main(String[] args){
		int i;
		SLType sl = new SLType();
		DATA pdata;
		String key;
		
		sl.SLinit(sl);
		System.out.println("init done!!!");
		
		Scanner scan = new Scanner(System.in);
		
		do{
			System.out.println("input node(num name age) :");
			DATA data = new DATA();
			data.key = scan.next();
			data.name = scan.next();
			data.age = scan.nextInt();
			
			if(data.age != 0){
				if(sl.SLadd(sl, data) == 0){
					break;
				}
			}else{
				break;
			}
			
		}while(true);
		System.out.println("All data : ");
		sl.SLall(sl);
		
		System.out.println("取出節點序號 ：");
		i = scan.nextInt();
		pdata = sl.SLfindbynum(sl, i);
		if(pdata != null){
			System.out.printf("%d node : (%s,%s,%d)",i,pdata.key,pdata.name,pdata.age);
		}
		
		System.out.println("key word：");
		key = scan.next();
		i = sl.SLfindbycont(sl, key);
		pdata = sl.SLfindbynum(sl, i);
		if(pdata != null){
			System.out.printf("%d node : (%s,%s,%d)",i,pdata.key,pdata.name,pdata.age);
		}
		
	} // main
}
