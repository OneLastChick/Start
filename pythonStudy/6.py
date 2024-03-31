import base64
import string
       #正确  正确 正确  O?? 正确  
str1 = "ox6q JI1Q 7kJY 1Ovu R/1C Bs1y RVvu EIfe R/lC UMAG rV8L wEL="

string1 = "yAmxnvX/wdjzR6b2U9TVB1PE8rNoJl7CFpOQM+saqW022feKY22GL5Ikhu222S22"
string2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

print (base64.b64decode(str1.translate(str.maketrans(string1,string2))))

