#!/usr/bin/python3

import random

PRIMERI = range(1, 50 + 1)
LAHKI = range(1, 25 + 1)

def main():
    random.seed(201709030837)

    for primer in PRIMERI:
        f = open('test%02d.in' % primer, 'wt')

        if primer % 10 == 1:
            m = 10
        elif primer % 10 in {2, 3}:
            m = 100
        else:
            m = 1000
        maxExp = random.randint(m // 10, m)

        e = random.randint(1, maxExp)
        if primer in LAHKI:
            delitelj = random.randint(2, 4)
            deljenec = int(''.join([str(random.randint(1 if i == 0 else 0, 9 // delitelj) * delitelj) for i in range(e)]))
        else:
            delitelj = random.randint(2, 8)
            deljenec = random.randint(1, 10 ** e)

        f.write('%d %d\n' % (deljenec, delitelj));
        f.close()

if __name__ == '__main__':
    main()
