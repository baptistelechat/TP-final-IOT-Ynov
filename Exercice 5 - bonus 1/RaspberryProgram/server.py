from pycnic.core import WSGI
from Routes.readValue import ReadValue

class app(WSGI):
    routes = [('/read', ReadValue())]