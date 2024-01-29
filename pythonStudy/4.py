import base64
import string

str1 = "ox6qJI1Q 7kJY1Ovu R/1CBs1y RVvuEIfe R/lC UMAG rV8LwEL="

string1 = "ZAmxnvX/wdjZR6byU9TVB1PE8rNoJl7CFpZQM+saqW0ZZfeKYZOGL5IkhuZZZSZZ"
string2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

print (base64.b64decode(str1.translate(str.maketrans(string1,string2))))

