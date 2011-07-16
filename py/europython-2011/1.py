
def main(line):
        letter = line[-1].lower()

        if letter == 'y':
	        who = "nobody"
        elif letter in 'aeoiu':
                who = "a queen"
        else:
                who = "a king"

        return "%s is ruled by %s." % (line, who)


if __name__ == '__main__':
	import sys
	N = int(sys.stdin.readline())
	for i in xrange(N):
		res = main(sys.stdin.readline().strip())
		print "Case #%d: %s" % (i + 1, res)	
