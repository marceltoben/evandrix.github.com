
def main(word):
	pos = []
	for i, l in enumerate(word):
		if l in 'aoeiu':
			pos.append(i)

	for i in xrange(len(pos) - 2):
		for p1 in xrange(pos[i - 1] + 1 if i else 0, pos[i] + 1):
			for p2 in xrange(pos[i + 1], pos[i + 2]):
				st = word[p1:p2 + 1]
				try:
					p3 = word.index(st, pos[i + 2] + 1)
					return 'Spell!'
				except ValueError:
					continue
	return 'Nothing.'


if __name__ == '__main__':
	import sys
	N = int(sys.stdin.readline())
	for i in xrange(N):
		res = main(sys.stdin.readline())
		print "Case #%d: %s" % (i + 1, res)	
