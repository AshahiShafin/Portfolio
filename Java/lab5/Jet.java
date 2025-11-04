package lab5;//Ashahi Shafin, CET 3640 - HD80)

import java.util.Random;
public class Jet implements Movable {
    private int x;
    private int y;

    //default constructor
    public Jet() {
        x = 0;
        y = 0;
    }

    //parameterized constructor
    public Jet(int x, int y) {
        this.x = x;
        this.y = y;
    }

    //implement moveForward() method

    public void moveForward() {
        //create a Random class object
        Random r = new Random();
        //generate an random integer between 1 and 5
        int step = r.nextInt(5) + 1;
        //increment x by random integer generated
        x = x + step;
    }

    //implement moveBackward() method

    public void moveBackward() {
        //decrement x by 1
        x = x - 1;
    }


    //implement moveUp() method
    public void moveUp() {
        //create a Random class object
        Random r = new Random();
        //generate an random integer between 1 and 5
        int step = r.nextInt(5) + 1;
        //increment y by random integer generated
        y = y + step;
    }


    //implement moveDown() method
    public void moveDown() {
        //decrement y by 1
        y = y - 1;
    }

    //method to display coordinates

    public void displayCoordinates() {
        System.out.println("(" + x + "," + y + ")");
    }
}
	

