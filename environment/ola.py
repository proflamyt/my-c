from flask import Flask, render_template, request
app = Flask(__name__)
@app.route("/")
def hello():
    name = request.args.get("name")
    return render_template("ola.html",name=name)