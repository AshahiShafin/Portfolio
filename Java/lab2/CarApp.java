package lab1;

public class CarApp
{

   public static void main(String[] args)
{

       Car aCar = new Car(2021, "Ford");
      

       System.out.println("Year model of the car: " + aCar.getYearModel());
       System.out.println("Make of the car: " + aCar.getMake());
       System.out.println();
      
       for(int i = 0; i < 5; i++)
{
           aCar.accelerate();
           System.out.println("Speed of the car: " + aCar.getSpeed());
}
      

       for(int i = 0; i < 5; i++)
{
           aCar.brake();
           System.out.println("Speed of the car: " + aCar.getSpeed());
}
      
} 
} 