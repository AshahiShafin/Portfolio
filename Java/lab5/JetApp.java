package lab5;//Ashahi Shafin, CET 3640 - HD80)

public class JetApp {
	public static void main(String[] args) {

        Jet j = new Jet(0, 0);

        System.out.println("Coordinates at beginning..");
        j.displayCoordinates();
        System.out.println("Coordinates after move forward..");

        j.moveForward();

        j.displayCoordinates();
        System.out.println("Coordinates after move backward..");

        j.moveBackward();

        j.displayCoordinates();
        System.out.println("Coordinates after move upward..");

        j.moveUp();

        j.displayCoordinates();
        System.out.println("Coordinates after move downward..");

        j.moveDown();

        j.displayCoordinates();
    }
}