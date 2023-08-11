#!/usr/bin/python3

PRIMERI = range(1, 50 + 1)
LAHKI = range(1, 25 + 1)

def main():
    for p in PRIMERI:
        print(p)
        f = open('matrika%02d.txt' % p)
        visina, sirina = [int(t) for t in f.readline().strip().split()]
        assert(1 <= visina <= 100)
        assert(1 <= sirina <= 100)
        barve = set()
        rdece = set()
        for i in range(visina):
            komponente = [int(t) for t in f.readline().strip().split()]
            assert(all([0 <= k <= 255 for k in komponente]))
            r = [komponente[3 * i] for i in range(sirina)]
            g = [komponente[3 * i + 1] for i in range(sirina)]
            b = [komponente[3 * i + 2] for i in range(sirina)]
            barve |= set(zip(r, g, b))
            rdece |= set(r)

        if p in LAHKI:
            assert(len(rdece) == len(barve))

        f.close()

if __name__ == '__main__':
    main()
