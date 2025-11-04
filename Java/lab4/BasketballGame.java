package lab4;//Ashahi Shafin, CET 3640 - HD80)

public class BasketballGame {

   public static void main(String[] args) {

       BasketballPlayer player1 = new BasketballPlayer();
       player1.setLeague("Atlantic Division");
       player1.setName("Julius Randle");
       player1.setTeam("New York Knicks");
       player1.setNumber("30");

       BasketballPlayer player2 = new BasketballPlayer();
       player2.setLeague("Atlantic Division");
       player2.setName("Kevin Durant");
       player2.setTeam("Brroklyn Nets");
       player2.setNumber("7");      
      
       System.out.println(player1.getName()+" from "+player1.getLeague()+" "+player1.getTeam()+" "+player1.jump());
       System.out.println(player1.getName()+" from "+player1.getLeague()+" "+player1.getTeam()+" "+player1.dunk());
       System.out.println(player1.getName()+" from "+player1.getLeague()+" "+player1.getTeam()+" "+player1.freeThrow());
       System.out.println(player2.getName()+" from "+player2.getLeague()+" "+player2.getTeam()+" "+player2.jump());
       System.out.println(player2.getName()+" from "+player2.getLeague()+" "+player2.getTeam()+" "+player2.dunk());
       System.out.println(player2.getName()+" from "+player2.getLeague()+" "+player2.getTeam()+" "+player2.freeThrow());
       System.out.println(player2.getName()+" from "+player2.getLeague()+" "+player2.getTeam()+" "+player2.walkover());

   }

}
