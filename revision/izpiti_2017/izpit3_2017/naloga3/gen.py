#!/usr/bin/python3

import random

PRIMERI = range(1, 50 + 1)
LAHKI = range(1, 25 + 1)
BARVE = [(r, g, b) for r in range(256) for g in range(256) for b in range(256)]

def main():
    random.seed(201706201629)

    for p in PRIMERI:
        f = open('matrika%02d.txt' % p, 'wt')

        visina = random.randint(1, 10 ** random.randint(1, 2))
        sirina = random.randint(1, 10 ** random.randint(1, 2))
        f.write('%d %d\n' % (visina, sirina))

        stRazlicnihBarv = random.randint(1, 256) if p in LAHKI else random.randint(1, visina * sirina)
        if p in LAHKI:
            r = random.sample(range(256), stRazlicnihBarv)
            g = random.sample(range(256), stRazlicnihBarv)
            b = random.sample(range(256), stRazlicnihBarv)
            barve = list(zip(r, g, b))
        else:
            barve = random.sample(BARVE, stRazlicnihBarv)

        for i in range(visina):
            for j in range(sirina):
                barva = random.choice(barve)
                if j > 0:
                    f.write(' ')
                f.write('%d %d %d' % barva)
            f.write('\n')

        f.close()

if __name__ == '__main__':
    main()
