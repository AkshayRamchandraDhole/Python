class Mobile:

    companyName = "Real"
    def __init__(self):
        self.Name = "Realme"
    def mobName(self):

        print("Realme XT")

    class Snapchat:

        def snap(self):
            print("Click snap")
            print(Mobile().Name)
            print(Mobile.companyName)

        class Feature:

            def filter(self):
                print("Filter Feature")
                Mobile().Snapchat().snap()

            @staticmethod
            def fil():
                print("Static fil")

#Mobile().Snapchat().Feature().filter()
#Mobile().Snapchat().Feature().fil()
Mobile().Snapchat().snap()
