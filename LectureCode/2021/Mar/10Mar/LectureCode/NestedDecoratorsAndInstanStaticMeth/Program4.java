class FrenchKing{

	String name = "Lowis XVI";

	void kingName(){
	
		System.out.println(name);
	}

	public static void main(String[] args){
	
		FrenchKing fr = new FrenchKing();
		fr.kingName();
		FrenchKing.kingName();
	}
}
