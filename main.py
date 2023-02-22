import os

inp = ""

while inp != "Exit":             # Loop continuously
    inp = ""
    print("1- FORWARD")
    print("2- STOP")
    print("Exit")

    inp = raw_input("Enter your selection:")       # Get the input
    if inp == "FORWARD":       # If it is a blank line...
        os.system("rostopic pub toggle_led std_msgs/Empty --once")
    elif inp == "STOP":
        os.system("rostopic pub stop_motor std_msgs/Empty --once")
    else:
        print("You are exiting the program!!!")
        inp = "Exit"


   