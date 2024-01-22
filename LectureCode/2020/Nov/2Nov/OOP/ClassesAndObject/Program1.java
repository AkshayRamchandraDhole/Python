class Employee{

	int emp_id = 10;
	String empName = "Rahul";
	String cmpName = "BMC Software";

	void display(){
	
		System.out.println("In Display");
	}

	public static void main(String[] args){
	
		Employee emp = new Employee();
		emp.display();
	}
}
