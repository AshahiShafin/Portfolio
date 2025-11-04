package lab9; //Ashahi Shafin CET 3640 HD80

import java.util.ArrayList;
public class ListManagerApp
{
public static void printList(ArrayList<Integer> list) {
System.out.println("Printing the list elements");
for(int i = 0;i<list.size();i++) {
System.out.print(list.get(i) + " ");
}
System.out.println();
}
public static void main(String args[])
{
 ArrayList<Integer> list = new ArrayList<Integer>();
list.add(12);
list.add(-21);
 list.add(45);
list.add(-42);
list.add(45);
list.add(12);
list.add(-21);
ListManager manager = new ListManager(list);
printList(list);
System.out.println("Positive Count: " + manager.countPositives());
System.out.println("Negative Count: " + manager.countNegatives());
printList(manager.sortAndRemoveDuplicates());
}
}