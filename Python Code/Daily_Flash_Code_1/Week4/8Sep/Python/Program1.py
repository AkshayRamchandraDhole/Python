import array as ar
def fun(arr1,srt,end):
    if(srt < 0 or end>=len(arr1) or srt > end):
        return
    print(arr1[srt])
    fun(arr1,srt+1,end)
arr1=ar.array('i',[1,2,3,4,5])
srt=0
end=len(arr1)-1
fun(arr1,srt,end)
