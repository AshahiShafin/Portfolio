package lab7; //Ashahi Shafin, CET 3640 - HD80)

import java.util.ArrayList;
import java.util.Scanner;

public class FilterWith {
public static void filterRange(ArrayList<Integer> list,int min, int max)
{
ArrayList<Integer> listNew=new ArrayList<Integer>();
for(int i=0;i<list.size();i++)
{
if(list.get(i)>=min && list.get(i)<=max)      
{
listNew.add(list.get(i));
}          
}	      
list.removeAll(listNew);   
}	  
public static void main(String[] args)
{
ArrayList<Integer> list=new ArrayList<Integer>();	      
list.add(4);
list.add(7);
list.add(9);
list.add(2);
list.add(7);
list.add(7);
list.add(5);
list.add(3);
list.add(5);
list.add(1);
list.add(7);
list.add(8);
list.add(6);
list.add(7);
Scanner sc=new Scanner(System.in);
System.out.println("Enter min : ");
int min=sc.nextInt();
System.out.println("Enter Max : ");
int max= sc.nextInt();
filterRange(list, min, max);
for(int i=0;i<list.size();i++)
{
System.out.print(list.get(i)+" ");
}
}
}