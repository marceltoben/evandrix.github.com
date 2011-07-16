
def main(array):
	if len(array) == 1:
		return ['']

	sub = {}
	for name in array:
		l = len(name)
		x = name.lower()
		was = set()
		for p1 in xrange(l - 1):
			for p2 in xrange(p1 + 1, l):
				s = x[p1:p2]
				if s in was:
					continue
				else:
					was.add(s)
				try:
					sub[s] += 1
				except KeyError:
					sub[s] = 1
	res = [x[0] for x in sub.iteritems() if x[1] == 1]
	res.sort(key=lambda s: len(s))

	out = []
	for name in array:
		matching = []
		name_lc = name.lower()
		for s in res:
			if s in name_lc:
				matching.append(s)
#		print name, matching
		
		if matching:
			min_len = len(matching[0])
			xxx = filter(lambda s: len(s) ==  min_len, matching)
			item = sorted(xxx)[0].upper()
			out.append(item)
		else:
			out.append(None)		
	return out


if __name__ == '__main__':
	import sys
	T = int(sys.stdin.readline())
	for i in xrange(T):
		N = int(sys.stdin.readline())
		print "Case #%d:" % (i + 1)
		songs = []	
		for j in xrange(N):
			songs.append(sys.stdin.readline())
		res = main(songs)
		for s in res:
			print '"%s"' % s if s is not None else ':('
