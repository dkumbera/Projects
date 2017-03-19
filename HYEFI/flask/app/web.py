#!/usr/bin/env python
from flask import Flask,redirect
from flask import render_template
import distance
import time

app = Flask(__name__)
@app.route('/')
def index():
  #  dist=777
    dist=int(distance.getDistDat())

    sensor={'dist':dist}
    return render_template("index.html",sensor=sensor)

@app.route('/my-link/')
def my_link():
    distance.mainz()
  #  dist=777
    dist=int(distance.getDistDat())

    sensor={'dist':dist}
    time.sleep(5)

    return render_template("index.html",sensor=sensor)

if __name__ == '__main__':
    app.run(host='0.0.0.0')

