#python计算每个月的天数
import calendar
monthRange = calendar.monthrange(2016,9)
print(monthRange)
print(calendar.mdays[9])
#Python获取昨天日期
import datetime 
def getYesterday():
    today=datetime.date.today()
    oneday=datetime.timedelta(days=1)
    yesterday=today-oneday
    return yesterday

print(getYesterday())

