import serial

with serial.Serial('/dev/ttyACM0',9600,timeout=10)as ser:
        while True:
                motor_move=raw_input('Which direction you want to move?')[0]
                if motor_move in 'Ff':
                        ser.write("Forward\n".encode('utf-8'))
                if motor_move in 'Bb':
                        ser.write("Backward\n".encode('utf-8'))
                if motor_move in 'Ll':
                        ser.write("Left\n".encode('utf-8'))
                if motor_move in 'Rr':
                        ser.write("Right\n".encode('utf-8'))
                if motor_move in 'Ss':
                        ser.write("Stop\n".encode('utf-8'))