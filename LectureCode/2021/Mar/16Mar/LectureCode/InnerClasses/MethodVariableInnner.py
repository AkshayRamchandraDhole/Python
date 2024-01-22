class Software:

    companyName = "Biencaps"  #static variable

    def softName(self):
        self.companyName = "Biencaps"  #Instance variable
        #self.compName="Core2web"

        print("HealthCare")

    class Language:


        def progLang(self):

            print("Python")
            print(Software.companyName)
            print(Software.companyName)
Software().Language().progLang()

