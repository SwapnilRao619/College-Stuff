class Time():
    def __init__(self,hours,minutes,seconds):
        self.hours = hours
        self.minutes = minutes
        self.seconds = seconds
    
    def conv(self):
        tseconds = ((self.hours*3600) + (self.minutes*60) + (self.seconds))
        print(f"Total Time in seconds: {tseconds} seconds")
    
hours = int(input("Enter hours: "))
minutes = int(input("Enter minutes: "))
seconds = int(input("Enter seconds: "))

t = Time(hours,minutes,seconds)
t.conv()