# import time
# import datetime
# threeDayAgo = (datetime.datetime.now()-datetime.timedelta(days=3))
# timeStamp=int(time.mktime(threeDayAgo.timetuple()))
# print(time.mktime(threeDayAgo.timetuple()))
# otherStyleTime=threeDayAgo.strftime("%Y-%m-%d %H:%M:%S")

import time
import datetime
 
#给定时间戳
timeStamp = 1557502800
dateArray = datetime.datetime.utcfromtimestamp(timeStamp)
threeDayAgo = dateArray - datetime.timedelta(days = 3)
print(threeDayAgo)