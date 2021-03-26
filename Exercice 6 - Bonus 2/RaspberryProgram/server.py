from pycnic.core import WSGI
from Routes.readValue import ReadValue
from Routes.readValue import ChangeLed

class app(WSGI):
    routes = [('/read', ReadValue()),('/changeled', ChangeLed())]