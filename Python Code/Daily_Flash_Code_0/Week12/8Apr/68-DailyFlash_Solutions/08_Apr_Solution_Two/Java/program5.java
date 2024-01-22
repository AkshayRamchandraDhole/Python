class Program {
	
	static int fact(int n){
		if(n==0)
			return 1;
		else
			return n*fact(n-1);
	}

	public static void main(String[] args){
		int per = fact(8)/fact(5);
		System.out.println("Possible ways : " + per);
	}
}
