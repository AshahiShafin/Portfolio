package lab6;//Ashahi Shafin, CET 3640 - HD80)

public class Percent {
	  
public double percentEven(int array[])
{
int count = 0;
for(int i=0;i<array.length;i++)
{
 if(array[i] % 2 == 0) 
count++;
}
return (double)count/array.length*100;
}
}