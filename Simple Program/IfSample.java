
public class IfSample {
	public static void main(String args[]){
		int x, y;
		x= 10;
		y= 20;
		
		if(x < y) System.out.println("X is less than Y");
		
		x= x * 2;
		if(x == y) System.out.println("X now equal to Y");
		
		x=x*2; 
		if(x>y) System.out.println("X now greater than Y");
		
		//this won't display anything
		if(x == y) System.out.println("You won't see this");
		
	}

}
