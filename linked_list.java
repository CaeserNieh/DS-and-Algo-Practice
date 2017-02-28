import java.util.Scanner;

class Data{
	String key;
	String name;
	int age;
}
class CLType{
	Data nodeData = new Data();
	CLType nextNode;
	
	CLType CLAddEnd(CLType head,Data nodeData){
		
		CLType node,htemp;
		
		if((node = new CLType()) == null){
			System.out.println("Fail!");
			return null;
		}
		else{
			node.nodeData = nodeData;
			node.nextNode = null;
			if(head == null){
				head = node;
				return head;
			}
			htemp = head;
			while(htemp.nextNode != null){
				htemp = htemp.nextNode;
			}
			htemp.nextNode = node;
			return head;
		}
		
	}// CLAddEnd
	
	CLType CLAddFirst(CLType head,Data nodeData){
		
		CLType node;
		
		if((node = new CLType()) == null){
			System.out.println("Fail!");
			return null;
		}else{
			node.nodeData = nodeData;
			node.nextNode = head;
			head = node;
			return head;
		}
	}//CLAddFirst
	
	CLType CLFindNode(CLType head,String key){
		
		CLType htemp;
		htemp = head;
		while(htemp != null){
			if(htemp.nodeData.key.compareTo(key) == 0){
				return htemp;
			}
			htemp = htemp.nextNode;
		}
		return null;
	}
	
	CLType CLInsertNode(CLType head,String findkey,Data nodeData){
		
		CLType node,nodetemp;
		
		if((node = new CLType()) == null){
			System.out.println("Fail!");
			return null;
		}
		
		node.nodeData = nodeData;
		nodetemp = CLFindNode(head,findkey);
		if(nodetemp != null){
			node.nextNode = nodetemp.nextNode;
			nodetemp.nextNode = node;
		}else{
			System.out.println("can't find the position");
		}
		return head;
	}
	
	int CLDeleteNode(CLType head,String key){
		
		CLType node,htemp;
		htemp = head;
		node = head;
		while(htemp != null){
			if(htemp.nodeData.key.compareTo(key) == 0){
				node.nextNode = htemp.nextNode;
				return 1;
			}
			else{
				node = htemp;
				htemp = htemp.nextNode;
			}
		}
		return 0;
	}
	
	int CLLength(CLType head){
		CLType htemp;
		int Len = 0;
		htemp = head;
		while(htemp != null){
			Len++;
			htemp = htemp.nextNode;
		}
		return Len;
	}
	
	void CLAllNode(CLType head){
		CLType htemp;
		Data nodeData;
		htemp = head;
		System.out.printf("%d node\n",CLLength(head));
		
		while(htemp != null){
			nodeData = htemp.nodeData;
			System.out.printf("node (%s,%s,%s)\n",nodeData.key,nodeData.name,nodeData.age);
			htemp = htemp.nextNode;
		}
	}// CLAllNode()
	
}


public class linked_list {
	public static void main(String[] args){
		
		CLType node, head = null;
		CLType CL = new CLType();
		String key,findkey;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("key name age ");
		do{
			Data nodeData = new Data();
			nodeData.key = scan.next();
			if(nodeData.key.equals("0")){
				break;
			}else{
				nodeData.name = scan.next();
				nodeData.age = scan.nextInt();
				head = CL.CLAddEnd(head, nodeData);
			}
		}while(true);
		
		CL.CLAllNode(head);
		
		System.out.println("findkey : ");
		findkey = scan.next();
		
		System.out.println("input node (key name age) :");
		Data nodeData = new Data();
		
		nodeData.key = scan.next();
		nodeData.name = scan.next();
		nodeData.age = scan.nextInt();
		
		head = CL.CLInsertNode(head, findkey, nodeData);
		CL.CLAllNode(head);
		
		System.out.println("Delete key :");
		key = scan.next();
		CL.CLDeleteNode(head, key);
		CL.CLAllNode(head);
		
		System.out.println("Find key :");
		key = scan.next();
		node = CL.CLFindNode(head, key);
		if(node != null){
			nodeData = node.nodeData;
			System.out.printf("Key word %s  node (%s,%s,%d)\n",key,nodeData.key,nodeData.name,nodeData.age);
		}else{
			System.out.printf("can't find key %s !!",key);
		}
		
	}//main
}//class
