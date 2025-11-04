package lab9; //Ashahi Shafin CET 3640 HD80

import java.util.ArrayList;
import java.util.Collections;


public class ListManager {
private ArrayList<Integer> list;
public ListManager(ArrayList<Integer> list) {
this.list = list;
}

public int countPositives() {
int count = 0;
for(int i = 0;i<list.size();i++) {
if(list.get(i) > 0) {
count++;
}
}
return count;
}

public int countNegatives() {
int count = 0;
for(int i =0;i<list.size();i++) {
if(count < 0) {
count += 1;
}
}
return count;
}

public ArrayList<Integer> sortAndRemoveDuplicates(){
ArrayList<Integer> newList = new ArrayList<Integer>();
if(list.size() == 0) return newList;
Collections.sort(list);
int last = list.get(0);
newList.add(last);
for(int i = 1;i<list.size();i++) {
int curVal = list.get(i);
if(last != curVal) {
newList.add(curVal);
last = curVal;
}
}
return newList;
}
}