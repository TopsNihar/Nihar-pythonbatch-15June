import datetime
import pytz

time_zones = {
    0: "canada/Newfoundland",
    1: "America/New_York",
    2: "Europe/London",
    3: "Australia/Sydney",
    4: "Asia/Shanghai",
    5: "Asia/Tokyo",
    6: "Europe/Moscow"
}

choice = input("Enter your choice (0-6): ")

if choice.isdigit() and 0 <= int(choice) <= 6:
    tz = time_zones[int(choice)]
    local_time = datetime.datetime.now(pytz.timezone(tz))
    print("Current time :", local_time.strftime('%I:%M:%S'))