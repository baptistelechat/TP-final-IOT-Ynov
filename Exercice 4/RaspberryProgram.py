import serial
serialConnection = serial.Serial('/dev/ttyAMA0', 9600, timeout=1)
serialConnection.open()

serialConnection.write('testing')
try:
    while 1:
    response = serialConnection.readline()
    print(response)
except KeyboardInterrupt:
    serialConnection.close()