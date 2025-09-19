# KW Notes about getting the time

import time
import datetime

epoch = time.time()
readable_time = time.ctime(epoch)

print(f"The time in seconds since Jan 1, 1970: {epoch}")
print(f"The time is: {readable_time}")

now = datetime.datetime.now()
hour = now.hour

print(f"The time is {now}.")
print(f"The hour is {hour}.")

# If you are doing this at home the time is going to be 6 hours ahead :D