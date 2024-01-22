class ICCTrophy{

	static int trophyWin = 3 ; 
	String name = null ; 

	ICCTrophy(String name){
	
		this.name = name ;
	}

	void win(){
	
		System.out.println(name);
		System.out.println(trophyWin);
	}

	public static void main(String[] args){
	
		ICCTrophy obj1 = new ICCTrophy("Dhoni");
		obj1.win();
		obj1.trophyWin ++ ;
		obj1.win();
		
		ICCTrophy obj2 = new ICCTrophy("Virat");
		obj2.win();
	}
}
