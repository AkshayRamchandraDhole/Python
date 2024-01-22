
import java.io.*;

class Pargaon {
	public static void main(String[] args) throws IOException{
		
		int day = 0,mn = 0, yr = 0;
		System.out.printf("Enter date dd mm yyyy : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{

			day = Integer.parseInt(br.readLine());
			mn = Integer.parseInt(br.readLine());
			yr = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException n){
			System.exit(0);
		}

		System.out.printf("%d/%d/%d\n", day, mn,yr);
		if(day <= 0 || mn <= 0 || yr <= 0 || day > 31 || mn > 12 ){
			System.out.printf("Invalid date\n");
			System.exit(0);
		}
		else if((mn <= 7 && day <= 31 && mn % 2 != 0) || (mn >= 8 && day <= 31 && mn % 2 == 0)){
			System.out.printf("Valid Date\n");
		}
		else if((mn != 2 && mn <= 7 && day <= 30 && mn % 2 == 0) || (mn >= 8 && day <= 30 && mn % 2 != 0)){
			System.out.printf("Valid Date \n");
		}

		else if(mn == 2 && yr % 100 == 0){
			if(yr % 400 == 0 && day <= 29){
				System.out.printf("Valid Date\n");
			}
			else if(day <= 28){
				System.out.printf("Valid Date\n");
			}
			else {
				System.out.printf("Invalid Date\n");
			}
		}
		else if(mn == 2 ){
			if(yr % 4 == 0 && day <= 29){
				System.out.printf("Valid Date\n");
			}
			else if(day <= 28){
				System.out.printf("Valid Date\n");
			}
			else {
				System.out.printf("Invalid Date\n");
			}
		}
		else {
			System.out.printf("Invalid Date\n");
		}

	}
}