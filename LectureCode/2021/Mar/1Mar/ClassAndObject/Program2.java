class CoronaStat{

	CoronaStat(){
	
		System.out.println("Not Parameterized Constructor");
	}
	CoronaStat(String name,int coronaCases){
	
		System.out.println(name + ":" + coronaCases);
	}
	public static void main(String[] args){
	
		CoronaStat obj1 = new CoronaStat();
		CoronaStat obj2 = new CoronaStat("Pune",1200);
		CoronaStat obj3 = new CoronaStat("Mumbai",1800);
	}
}
