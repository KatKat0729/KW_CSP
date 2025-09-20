# KW 7th Time of Day Assignment

import time
import datetime

now = datetime.datetime.now()
hour = now.hour
minute = now.minute

print(f"The time is {hour}:{minute}")

if hour >= 18 or hour <= 1:
    print(f"The time is {hour}, Good evening!")

elif hour >= 12 and hour < 18:
    print(f"The time is {hour}, good afternoon!")

else:
    print(f"The time is {hour}, good morning!")