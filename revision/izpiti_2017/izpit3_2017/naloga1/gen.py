#!/usr/bin/python3

import random

PRIMERI = range(1, 50 + 1)
LAHKI = range(1, 25 + 1)

MEJA1 = 3
MEJA2 = 5

NABOR = sorted(list(set(range(-1000, 1000 + 1)) - {0}))

def main():
    random.seed(201706201520)

    for p in PRIMERI:
        #meja = MEJA1 if p in LAHKI else MEJA2
        meja = random.randint(1, MEJA1) if p in LAHKI else random.randint(1, MEJA2)

        f = open('test%02d.in' % p, 'wt')

        stCet = min(10 ** meja, random.randint(1, 10 ** (p % 2 + 1)))
        znak = 1 if random.randint(0, 1) == 0 else -1

        stevila = []
        for i in range(stCet):
            dolzinaCete = random.randint(1, (10 ** meja) // stCet)
            stevila += [znak * random.randint(1, 1000) for i in range(dolzinaCete)]
            znak = -znak

        f.write(' '.join([str(t) for t in stevila]))
        f.write('\n')
        f.close()

if __name__ == '__main__':
    main()
