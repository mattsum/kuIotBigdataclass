from collections import deque
from collections import OrderedDict
from collections import defaultdict
from collections import Counter
from collections import deque
from collections import namedtuple
# from collections import ChainMap

def main():
    deque_list = deque()
    for i in range(5):
        deque_list.append(1)
    print(deque_list)
    deque_list.appendleft(10)
    print(deque_list)
    deque_list.rotate(2)
    deque_list.pop()
    print(deque_list)
    deque_list.popleft()
    print(deque_list)

    d = OrderedDict()
    d['x'] = 100
    d['y'] = 200
    d['z'] = 300
    d['z'] = 500

    for k, v in d.items():
        print(k, v)

    for k, v in OrderedDict(sorted(d.items(), key=lambda t: t[0])).items():
        print(k, v)

    #defaultdict
    d = defaultdict(lambda: 0)
    print(d)
    print(d['first'])
    s = [('yellow', 1), ('blue', 2), ('yellow', 3), ('blue', 4), ('red', 1)]
    d = defaultdict(list)
    for k, v in s:
        d[k].append(v)
    print(d.items())

    #Counter
    text = list("gallahad")
    c = Counter(text)
    print(c)

    #namedtuple
    Point = namedtuple('Point', ['x', 'y'])
    p = Point(11, y = 22)
    print(p)
    print(p.x, p.y)


if __name__ == "__main__":
    main()