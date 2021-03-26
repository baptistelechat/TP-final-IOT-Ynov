## 📚 Indications

#### 📝 Exercice 5 and 6

##### To setup webserver

Installation des dépendances par l'utilisation de : `pip install -r requirements.txt`  
Installer gunicorn `sudo apt-get install gunicorn3`  
Lancer le server: `gunicorn -b 127.0.0.1:5100 server:app`