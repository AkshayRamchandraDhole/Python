import java.io.*;


class Program5{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter the first Complex Number : \n");
		int real1 = Integer.parseInt(br.readLine());
		int img1 = Integer.parseInt(br.readLine()); 	
		System.out.printf("Enter the Second Complex Number : \n");
		int real2 = Integer.parseInt(br.readLine());
		int img2 = Integer.parseInt(br.readLine()); 	
		System.out.printf("Addition of %d + i%d & %d + i%d = %d + i%d",real1,img1,real2,img2,real1+real2,img1+img2);
	}	
}	
