total_sec=int(input())
day=total_sec//86400
remainder=total_sec%86400

hour=remainder//3600
remainder=remainder%3600

minute=remainder//60
last_sec=remainder%60

if day>0:
    print ("%d hari %02d:%02d:%02d" % (day, hour, minute, last_sec))
else:
    print ("%02d:%02d:%02d" % (hour, minute, last_sec))