package lab1; //Ashahi Shafin, CET 3640 - HD80)

import java.util.Scanner;

public class lab1 {

	 public static void main(String[] args)
{
		 @SuppressWarnings("resource")
		Scanner sca = new Scanner(System.in);
		 
		 int input;

		 System.out.print("Enter a number from 1 - 20: ");

		 input = sca.nextInt();
		 
		 while(input<1 || input >10){
	           
			 System.out.print("Invalid Number\n");
			   
			 System.out.print("Enter a number from 1 - 20: ");

			 input = sca.nextInt();
}

switch(input)

{

	case 1:       System.out.println(" I ");

	break;

	case 2:       System.out.println(" II ");

	break;

	case 3:       System.out.println(" III ");

	break;

	case 4:       System.out.println(" IV ");

	break;

	case 5:       System.out.println(" V ");

	break;                      

	case 6:       System.out.println(" VI ");

	break;

	case 7:       System.out.println(" VII ");

	break;

	case 8:       System.out.println(" VIII ");

	break;

	case 9:       System.out.println(" IX ");

	break;

	case 10:   System.out.println(" X ");

	break;
	           
	case 11:   System.out.println(" XI ");

	break;
	
	case 12:   System.out.println(" XII ");

	break;
	
	case 13:   System.out.println(" XIII ");

	break;
	
	case 14:   System.out.println(" XIV ");

	break;
	
	case 15:   System.out.println(" XV ");

	break;
	
	case 16:   System.out.println(" XVI ");

	break;
	
	case 17:   System.out.println(" XVII ");

	break;
	
	case 18:   System.out.println(" XVIII ");

	break;
	
	case 19:   System.out.println(" XIX ");

	break;
	
	case 20:   System.out.println(" XX ");

	break;

               
default:   System.out.println("Invalid");

break;

}
}
}
