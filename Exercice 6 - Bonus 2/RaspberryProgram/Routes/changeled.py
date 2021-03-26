from pycnic.core import Handler
from pycnic.errors import HTTP_400
import json
import requests
import serial
serialConnection = serial.Serial('/dev/ttyAMA0', 9600, timeout=1)

class ChangeLed(Handler):

    def get(self):
        serialConnection.open()
        serialConnection.write('changeLed')
        serialConnection.close()
        return {
            "msg": "LED Changed"
        }