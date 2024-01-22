import java.io.*;


class Program5{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the date");
		int date = Integer.parseInt(br.readLine());

		System.out.println("Enter the month");
		int month = Integer.parseInt(br.readLine());
	
		System.out.println("Enter the year");
		int year = Integer.parseInt(br.readLine());


		switch(month){

			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(date>31)
					System.out.printf("Date is invalid");
				else
					System.out.printf("Valid");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(date>30)
					System.out.printf("Date is invalid");
				else
					System.out.printf("Valid");
				break;
			case 2:
				//Here Leap Year condition is not handled try to handle if u can .....
				if(date>28)
					System.out.printf("Date is invalid");
				else
					System.out.printf("Valid");
				break;

		}

	}	
}	
