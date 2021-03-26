from pycnic.core import Handler
from pycnic.errors import HTTP_400
import json
import requests
import serial
serialConnection = serial.Serial('/dev/ttyAMA0', 9600, timeout=1)

class ReadValue(Handler):

    def get(self):
        serialConnection.open()
        value = serialConnection.readline()
        serialConnection.close()
        return {
            "value": value
        }