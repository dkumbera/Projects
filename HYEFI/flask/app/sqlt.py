#!/usr/bin/env python
import sqlite3
dbname='/var/www/templog.db'


def display_temp():

    conn=sqlite3.connect(dbname)
    curs=conn.cursor()

    for row in curs.execute("SELECT * FROM temps"):
        row=curs.fetchone()[1]

    conn.close()
    print(row)
def main():

        # display the contents of the database
    display_temp()


if __name__=="__main__":
    main()

