#!/usr/bin/python3

PRIMERI = range(1, 50 + 1)
LAHKI = range(1, 25 + 1)

def main():
    for p in PRIMERI:
        print(p)
        f = open('test%02d.in' % p)
        (strDeljenec, strDelitelj) = f.readline().strip().split()
        assert(strDeljenec[0] != '0')
        assert(strDelitelj[0] != '0')

        deljenec = int(strDeljenec)
        delitelj = int(strDelitelj)

        assert(1 <= deljenec <= 10 ** 1000)
        assert(2 <= delitelj <= 9)

        if p in LAHKI:
            strDeljenec = str(deljenec)
            assert(all([int(d) % delitelj == 0 for d in strDeljenec]))
        f.close()

if __name__ == '__main__':
    main()
