from cs50 import SQL
from flask import Flask, render_template, request, url_for

app = Flask(__name__)

db = SQL("sqlite:///registration.db")

@app.route("/", methods=["GET", "POST"])
def enroll():
    if request.method == "GET":
        return render_template("form.html")
    else:
        name_in = request.form.get("name")
        grade_in = int(request.form.get("grade"))
        course_in = request.form.get("course_field")
        db.execute("INSERT INTO students (name, grade, class) VALUES (:name, :grade, :course)",
            name = name_in, grade = grade_in, course = course_in)
        return render_template("confirmation.html", name = name_in, grade = grade_in, course = course_in)

@app.route("/apcsa")
def csa():
    students = db.execute("SELECT * FROM students WHERE class = :course", course = "AP CS A")
    if (len(students)) == 0:
        return render_template("empty.html")
    return render_template("students.html", roster = students, size = len(students), course = "AP CS A")

@app.route("/apcsp")
def csp():
    students = db.execute("SELECT * FROM students WHERE class = :course", course = "AP CSP")
    if (len(students)) == 0:
        return render_template("empty.html")
    return render_template("students.html", roster = students, size = len(students), course = "AP CSP")

if __name__ == "__main__":
    app.run(debug=True)