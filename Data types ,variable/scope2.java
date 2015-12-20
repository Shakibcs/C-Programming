
public class scope2 {
	public static void main(String args[]){
		int x=20;
	
		{
			//int x=9; //complie-time error - x already defined! or duplicate local variable
			x=10;		//correct
			System.out.println("x is "+x);
		}
		
	}
}
