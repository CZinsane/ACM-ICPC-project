import java.util.*;

public class Main{
	public static void main(String args[]){
		Scanner scan = new Scanner(System.in);
		int prev,curr,i,m,n;
		int f[] = new int[20];
		boolean flag;
		for(n=1;n<14;n++){
			for(m=n+1;true;m++){
				prev=1;
				flag=false;
				for(i=1;i<=n;i++){
					curr=(prev-2+m)%(2*n-i+1)+1;
					if(curr<=n){
						flag=true;
						break;
					}
					prev=curr;
				}
				if(!flag){
					f[n]=m;
					break;
				}
			}
		}
		
		while(scan.hasNext()){
			n=scan.nextInt();
			if(n==0)break;
                        System.out.println(f[n]);
		}
	}
}