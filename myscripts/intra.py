#!/usr/bin/env python3

import urllib.request
import json
import sys

def print_data(js):
    firstname = js["firstname"]
    lastname = js["lastname"]
    login = js["login"]
    if "promo" in js:
        promo = js["promo"]
        semester = js["semester_code"]
    if "gpa" in js:
        gpa = js["gpa"]
    if "userinfo" in js:
        userinfo = js["userinfo"]
    if "groups" in js:
        groups = js["groups"]

    print ("\nUser: %s %s (%s)\n" % (firstname, lastname, login))
    try:
        print ("\tPromo %s (current semester: %s)" % (promo, semester))
    except:
        pass
    try:
        print ("\tGPA:")
        for index in gpa:
            print ("\t\tcycle %s: %s" % (index["cycle"], index["gpa"]))
    except:
        pass
    try:
        print ("\n\tINFOS:")
        for index in userinfo:
            print ("\t\t%s: %s" % (index, userinfo[index]["value"]))
    except:
        pass
    try:
        print ("\n\tAFFILIATIONS:")
        for index in groups:
            print ("\t\t%s" % (index["title"]))
    except:
        pass
    print ()

try:
    autologin = "https://intra.epitech.eu/auth-d96051658e74960e32533a87c441ac76f204f036"
    username = sys.argv[1]
    link = autologin + "/user/" + username + "/?format=json"

    try:
        page = urllib.request.urlopen(link)
        data = page.read()
        js = json.loads(data.decode('utf-8'))

        if "error" in js:
            sys.stderr.write("User '" + username + "' not found...")
        else:
            print_data(js)

    except urllib.error.HTTPError as err:
        sys.stderr.write("Could not reteirve user's data: " + err.reason + "\n")

except IndexError:
    sys.stderr.write("Usage: " + sys.argv[0] + " username\n")
