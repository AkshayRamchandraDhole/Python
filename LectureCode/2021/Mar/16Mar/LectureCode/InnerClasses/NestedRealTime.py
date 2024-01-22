class Company:

    noOfEmp = 180000
    def __init__(self):
        self.companyName = "Amdocs"

    class Employee:

        def package(self):
            print("3.5 package")
        
        @staticmethod
        def rules():
            print("Company Name : ",Company().companyName)
            print("Number Of Empolyee : ",Company.noOfEmp)
            print("Company Rules")
Company().Employee().rules()
Company().Employee().package()


            
