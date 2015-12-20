//Demonstrate block scope	
public class Scope {
	public static void main(String args[]){
		int x; //known to all within main
		
		x=10;
		if(x== 10)
		{
			//start new scope
			int y=20; //known to this block
			
			//x and y both known here
			System.out.println("X and Y:"+ x + " " + y);
			x=y*2;
		}
		//y=100; //Error! y not known here
		
		//x is still known here
		System.out.println("X is "+x);
	}

}
