cricketers=['Kapil','Kohli','Raina','Dhoni','Chahal','Pant','Dravid','Bumrah','Harbhajan']
retire=['Dhoni','Dravid','Raina','Harbhajan','Kapil']
#rev=cricketers.reverse()
#print(rev)
for i in reversed(cricketers):
    if(i in retire):
        print(i,end="\n")
  
