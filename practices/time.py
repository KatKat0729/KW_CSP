# KW 7th Time of Day Assignment

import time
import datetime

now = datetime.datetime.now()
hour = now.hour
minute = now.minute

print(f"The time is {hour}:{minute}")

if hour >= 18 and hour <= 1:
    print(f"The time is {hour}:{minute}, Good evening!")

elif hour >= 12 and not hour >= 18:
    print(f"The time is {hour}:{minute}, good afternoon!")

else:
    print(f"The time is {hour}:{minute}, good morning!")
