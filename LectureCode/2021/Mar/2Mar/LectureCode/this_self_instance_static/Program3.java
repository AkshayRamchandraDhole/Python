class Core2web{

	static String teacher = "Shashi";
		String studName = "Sachin";

	public static void main(String[] args){
	
		Core2web obj1 = new Core2web();
		Core2web obj2 = new Core2web();

		System.out.println(obj1.teacher + "," +obj2.teacher);
		System.out.println(obj1.studName + "," +obj2.studName);

		obj1.studName = "Shardul";
		Core2web.teacher = "Pramod Sir";
		System.out.println(obj1.teacher + "," +obj2.teacher);
		System.out.println(obj1.studName + "," +obj2.studName);

		
		
	}
}
