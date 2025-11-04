package lab1;

import java.util.Scanner;

//Ashahi Shafin, CET 3640 - HD80)

public class lab2 {
static void metersToFeet(double m){
        
        double f=3.28084 * m; 
        double i=f*12;        
        
        System.out.println((int)(i/12)+"'"+Math.round(i%12)+"''");
}
    
      static void feetToMeters(double f,double i){
        
        double m = 0.3048 * f + 0.0254*i;
       
        System.out.format("%.4f",m); 
        System.out.print(" m");    
}
         
public static void main(String[] args) {
            
        	System.out.println("Which type you want to convertion for measurement. Enter 1 or 2:\n (1) Meters to feet \n (2) Feet to meter ");
            @SuppressWarnings("resource")
            Scanner scan=new Scanner(System.in);
            int choice=scan.nextInt();
            if(choice==1){
            	System.out.println("Enter the length in meter");
                double m=scan.nextDouble();
                metersToFeet(m); 
}
            else if(choice==2){
            	System.out.println("Enter length in feet");
                double f=scan.nextDouble();
                System.out.println("Enter length in inches");
                double i=scan.nextDouble();
                feetToMeters(f,i); 
}
            else{
            	System.out.println("Wrong Choice"); 
}
}
}