class Mobile{

	class App{
	
		void appName(){
		
			System.out.println("Instagram");
		}
	}
	public static void main(String[] args){
	
		Mobile m = new Mobile();
		Mobile.App ma = m.new App();
		ma.appName();

		new Mobile().new App().appName();
	}
}
