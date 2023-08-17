#!/usr/bin/python3

PRIMERI = range(1, 50 + 1)
LAHKI = range(1, 25 + 1)

MEJA1 = 3
MEJA2 = 6

def main():
    for p in PRIMERI:
        print(p)
        f = open('test%02d.in' % p)
        stevila = [int(t) for t in f.readline().strip().split()]
        assert(1 <= len(stevila) <= 10 ** MEJA2)
        if p in LAHKI:
            assert(len(stevila) <= 10 ** MEJA1)
        assert(all([t != 0 for t in stevila]))
        f.close()

if __name__ == '__main__':
    main()
