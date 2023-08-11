#!/usr/bin/python3

import random

PRIMERI = range(1, 50 + 1)
LAHKI = range(1, 25 + 1)
BARVE = [(r, g, b) for r in range(256) for g in range(256) for b in range(256)]

def main():
    for p in PRIMERI:
        f = open('matrika%02d.txt' % p)
        g = open('slika%02d.ppm' % p, 'wb')

        visina, sirina = [int(t) for t in f.readline().strip().split()]
        ws(g, 'P6\n')
        ws(g, '%d %d\n' % (sirina, visina))
        ws(g, '255\n')
        for i in range(visina):
            komponente = [int(t) for t in f.readline().strip().split()]
            for komponenta in komponente:
                wi(g, komponenta)

        f.close()
        g.close()

def ws(f, niz):
    f.write(niz.encode('ascii'))

def wi(f, n):
    f.write(bytearray([n]))

if __name__ == '__main__':
    main()
