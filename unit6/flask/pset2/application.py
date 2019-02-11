from flask import Flask, redirect, render_template, request, url_for

import os
import sys
import pset2
from helpers import *

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/initials", methods=["GET", "POST"])
def initials():
    if request.method == "GET":
        return render_template("initials.html")
    else:
        name = request.form.get("name")
        initials = pset2.initials(name)
        
        return render_template("initialized.html", initials=initials)
    
@app.route("/caesar", methods=["GET", "POST"])
def caesar():
    if request.method == "GET":
        return render_template("caesar.html")
    else:
        plaintext = request.form.get("plaintext")
        shift = int(request.form.get("shift"))
        ciphertext = pset2.caesar(plaintext, shift)

        return render_template("caesarshift.html", plaintext=plaintext, ciphertext=ciphertext)

@app.route("/vigenere", methods=["GET", "POST"])
def vigenere():
    if request.method == "GET":
        return render_template("vigenere.html")
    else:
        plaintext = request.form.get("plaintext")
        key = request.form.get("keyword")
        ciphertext = pset2.vigenere(plaintext, key)
        
        return render_template("vigenereshift.html", plaintext=plaintext, ciphertext=ciphertext)
