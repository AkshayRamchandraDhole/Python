class CricketPlayer{

	String Name;
	String food;
	CricketPlayer(String Name,String food){
	
		this.Name = Name;
		this.food = food;
		System.out.println(this.Name + " : "+ food);
	}
	public static void main(String[] args){
	
		CricketPlayer obj1 = new CricketPlayer("Rohit","PurnPoli");
		CricketPlayer obj2 = new CricketPlayer("Virat","Misal");
	}
}
