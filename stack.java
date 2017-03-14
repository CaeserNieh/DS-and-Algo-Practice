import java.util.Scanner;

class DATA{
	String name;
	int age;
}//class DATA
class StackType{
	static final int MAXLEN = 50;
	DATA[] data = new DATA[MAXLEN+1];
	int top;

	StackType STinit(){
		StackType p;
		if((p = new StackType())  != null){
			p.top = 0;
			return p;
		}
	}//STinit()

	boolean STisempty(StackType s){
		boolean t;
		t = (s.top == 0);
		return t;
	}//STisempty

	boolean STisfull(StackType s){
		boolean t;
		t = (s.top == MAXLEN);
		return t;
	}

	void STclear(){
		s.top = 0;
	}

	void STfree(){
		if(s != null){
			s = null;
		}
	}

	int PushST(StackType s, DATA data){
		if((s.top+1) > MAXLEN ){
			System.out.println("Stack over flow");
			return 0;
		}
		s.data[++s.top] = data;
		return 1;
	}

	DATA PopST(StackType s){
		if(s.top == 0){
			System.out.println("Stack is full!");
			System.exit(0);
		}
		return (s.data[s.top--]);
	}

	DATA PeekST(StackType s){
		if(s.top == 0){
			System.out.println("Stack is full!");
			System.exit(1);
		}
		return (s.data[s.top])
	}// read stack data;
}//StackType

public class stack{
	public static void main(String[] args){
		StackType st = new StackType();
		DATA data1 = new DATA();

		StackType stack_init = st.STinit();
		Scanner scan = new Scanner(System.in);

		System.out.println("push into stack: ");
		System.out.println("input name & age into stack : ");
		do{
			DATA data = new DATA();
			data.name = scan.next();
			if(data.name.equals("0")){
				break;
			}else{
				data.age = input.nextInt();
				st.PushST(stack,data);
			}
		}while(true);

		System.out.println("stack pop : ");
		String temp = "";
		temp = input.next();
		while(!temp.equals("0")){
			data1 = st.PopST(stack);
			System.out.printf("( %s , %s )\n",data1.name,data1.age);
			temp = scan.next();
		}
		System.out.println("test over!!");
		st.STfree(st);
	}
}

