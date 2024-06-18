class Member :                                               #creating class with name Member
    
    def __init__(self):                                     #creating the constructor
        self.stage_name=[]
        self.instrument=[]
        self.l=["Drummer","Bass Player","Guitarist","KeyboardPlayer","Vocalist"]
        print("enter the stage_name of a Drummer :")        
        self.stage_name.append(input())                                 #reading the stage_name of drummer
        print("enter the instrument : ")
        self.instrument.append(input())                                 #reading the instrument he uses
        print("enter the stage_name of a Bass Player :")
        self.stage_name.append(input())                                 #reading the stage_name of Bass Player
        print("enter the instrument : ")
        self.instrument.append(input())                                 #reading the instrument he uses
        print("enter the stage_name of a Guitarist :")
        self.stage_name.append(input())                                 #reading the stage_name of Guitarist
        print("enter the instrument : ")
        self.instrument.append(input())                                 #reading the instrument he uses
        print("enter the stage_name of a Keyboard Player :")
        self.stage_name.append(input())                                 #reading the stage_name of Keyboard Player
        print("enter the instrument : ")
        self.instrument.append(input())                                 #reading the instrument he uses
        print("enter the stage_name of a Vocalist :")
        self.stage_name.append(input())                                 #reading the stage_name of Vocalist
        print("enter the instrument : ")
        self.instrument.append(input())
    def method_Set(self,no,name,instrument_name):    #set method declaration with 3 variables
        self.stage_name[no]=name
        self.instrument[no]=instrument_name
        print("Successfully set.")
    def method_Get(self,no):                         #get method declaration with 1 variable
        print("Name of a",self.l[no],"is",self.stage_name[no],"instrument used is",self.instrument[no])
band=Member()                                   #creating member to a class
while(1):
    print("Enter options : 1.Set 2.Get 3.exit")
    op=int(input())
    if(op==1):
        print("Select option to set:\n 1.drummer\n2.Bass Player\n3.Guitarist\n4.Keyboard Player\n5.Vocalist")
        op1=int(input())
        print("enter the stage name : ")
        name1=input()
        print("enter the instrument : ")
        instru=input()
        band.method_Set(op1-1,name1,instru)         #calling set method
    elif(op==2):
        print("Select option to get:\n 1.drummer\n2.Bass Player\n3.Guitarist\n4.Keyboard Player\n5.Vocalist")
        op1=int(input())
        op1=op1-1
        band.method_Get(op1)                        #calling get method
    else:
        print("....End....")
        break
        
        