def main():
    str={}
    str=input()
    hash=[0 for i in range(26)]
    for i in str:
        hash[ord(i)-97]+=1
    flag,c=0,0
    for i in range(0,26):
        if hash[i] and flag==0:
            flag=hash[i]
        elif hash[i] and flag!=0:
            if hash[i]!=flag:
                c+=1
                
    if c>1:print("NO")
    else :print("YES")
if __name__=="__main__":main();
