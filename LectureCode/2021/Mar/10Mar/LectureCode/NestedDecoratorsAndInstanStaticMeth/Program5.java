class India{

	void printRepublicDay(){
	
		System.out.println("26 Jan 1950");
	}
	
	static void printIndependenceDay(){
	
		System.out.println("15 Aug 1947");
	}
	public static void main(String[] args){
	
		India in = new India();
		in.printRepublicDay();
		in.printIndependenceDay();
		India.printIndependenceDay();
	}
}
