
def main(array):
	map = {}
	C = len(array)
	for i in xrange(C):
		map[i + 1] = []
	for i, n in enumerate(array):
		map[n].append(i + 1)

	out = []
	for i in xrange(C):
		day = i + 1
		heard = set()
		speaking = set([day])
		while speaking:
			next = set()
			for x in speaking:
				for n in map[x]:
					if n not in heard and n not in speaking:
						next.add(n)
			heard.update(speaking)
			speaking = next
		out.append(len(heard))
	return out



if __name__ == '__main__':
	import sys
	T = int(sys.stdin.readline())
	for i in xrange(T):
		N = int(sys.stdin.readline())
		array = map(int, sys.stdin.readline().split(' '))
		res = main(array)
		print "Case #%d:" % (i + 1)
		for x in res:
			print x	
