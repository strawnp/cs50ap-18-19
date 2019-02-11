from flask import Flask, render_template, request, url_for
from random import randint

app = Flask(__name__)

@app.route("/")
def hello():
    return "hello, world"

@app.route("/cs50ap")
def greet():
    return "<h2>this is cs50ap</h2>"

@app.route("/parks")
def p_and_r():
    return render_template("parks.html")

@app.route("/roll")
def dice():
    roll = randint(1, 6)
    return render_template("dice.html", number = roll)

@app.route("/form", methods=["GET", "POST"])
def process():
    if request.method == "GET":
        return render_template("form.html")
    else:
        user_name = request.form.get("name")
        return render_template("greet.html", name = user_name)

if __name__ == "__main__":
    app.run(debug=True)