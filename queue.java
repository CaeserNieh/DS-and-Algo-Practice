import java.util.Scanner;

class Data{
	String name;
	int age;
}
class SQType{
	static final int QUEUELEN = 15;
	Data[] data = new Data[QUEUELEN];
	int head;
	int tail;
	
	SQType SQTypeInit(){
		SQType q;
		if((q = new SQType()) != null){
			q.head = 0;
			q.tail = 0;
			return q;
		}
		else{
			return null;
		}
	}// SQTypeInit
	
	int SQTypeIsEmpty(SQType q){
		int temp = 0;
		if(q.head == q.tail){
			temp = 1;
		}
		return temp;
	}//
	
	int SQTypeIsFull(SQType q){
		int temp = 0;
		if(q.tail == QUEUELEN){
			temp = 1;
		}
		return temp;
	}
	
	void SQTypeFree(SQType q){
		if(q != null){
			q = null;
		}
	}
	
	int InSQType(SQType q, Data data){
		if(q.tail == QUEUELEN){
			System.out.println("Queue is Full !!");
			return 0;
		}
		else{
			q.data[q.tail++] = data;
			return 1;
		}
	}
	
	Data OutSQType(SQType q){
		if(q.head == q.tail){
			System.out.println("Queue is empty !!");
			System.exit(0);
		}
		else{
			Data temp_data = q.data[0];
			for(int i = 0;i<SQTypeLen(q)-1;i++){
				q.data[i] = q.data[i+1];
			}
			q.tail--;
			return temp_data;
			
		}
		return null;
	}
	
	Data PeekSQType(SQType q){
		if(SQTypeIsEmpty(q) == 1){
			System.out.println("Queue is empty!!");
			return null;
		}
		else{
			return q.data[q.head];
		}
	}
	
	int SQTypeLen(SQType q){
		int temp;
		temp = q.tail - q.head;
		return temp;
	}
	
}//class	

public class queue {
	public static void main(String[] args){
		SQType st = new SQType();
		
		Data data1;
		
		Scanner scan = new Scanner(System.in);
		SQType stack = st.SQTypeInit();
		System.out.println("Queue ");
		System.out.println("input name and age into Queue");
		do{
			Data data = new Data();
			data.name = scan.next();
			data.age = scan.nextInt();
			if(data.name.equals("0")){
				break;
			}else{
				st.InSQType(stack, data);
			}
		}while(true);
		
		String temp = "1";
		System.out.println("take out element in Queue");
		temp = scan.next();
		while(!temp.equals("0")){
			data1 = st.OutSQType(stack);
			System.out.printf("data is (%s,%d)\n", data1.name,data1.age);
			temp = scan.next();
		}
		System.out.println("Test end!!");
		st.SQTypeFree(stack);
	}//main
}
