from flask import Flask, send_file

app = Flask(__name__)

filename = "Galti Se Mistake.mp3"

@app.route("/song")
def hello_world():
	return send_file(filename)

app.run(host="192.168.29.114", port="5500", debug = True)
