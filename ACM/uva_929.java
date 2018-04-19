public class uva_929{

	static boolean[][] vis = new boolean[1000][1000];
	static int [][] maze = new int[1000][1000];
	static int [][] cost = new int[1000][1000];
	static int MAX = 100000000;
	static int dx[] = {0,0,-1,1};
	static int dy[] = {-1,1,0,0};
	static int row ;
	static int column;
	static class node implements Comparable<node>{
		int i,j,w;
		public node(int i,int j,int c){
			this.i = i;
			this.j = j;
			this.w = c;
		}
		public int compareTo(node n1){
			return c - n1.c;
		}

	}

	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int input = scan.nextInt();
		for(int bigcounter = 0;bigcounter < input ;bigcounter++){
			row = scan.nextInt();
			column = scan.nextInt();
			for(int i = 0;i<row;i++){
				for(int j = 0;j<column;j++){
					int temp_number = scan.nextInt();
					maze[i][j] = temp_number; 
					vis[i][j] = false;
					cost[i][j] = MAX;
				}
			}//for i
			int end_x = row-1;
			int end_y = column-1;
			node start = new node(0,0,maze[0][0]);
			PriorityQueue<node> q = new PriorityQueue<node>();
			q.add(start);
			while(!q.isEmpty()){
				node c = q.poll();
				if((c.i == end_x) && (c.j == end_y)){
					System.out.println(c.c);
				}else if(!vis[c.i][c.j]){
					vis[c.i][c.j] = true;
					for(int i = 0;i<4;i++){
						int ni = c.i + dx[i];
						int nj = c.i + dy[i];
						if(ni>=0 && ni<row && nj>=0 && nj<column && c.w + maze[ni][nj] < cost[ni][nj]){
							q.add(new node(ni,nj,c.w + maze[ni][nj]));
							cost[ni][nj] = c.w + maze[ni][nj];
						}
					}

				}
			}

		}//for bigcounter
	}
}