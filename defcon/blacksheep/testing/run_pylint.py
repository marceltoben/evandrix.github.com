import os, sys, re

# look for the good extension
def good_ext(fext, l = None):
	if not l:
		return True
	fext = fext.lower()
	for e in l:
		if fext == e:
			return True
	return False

regIgnoreListCompiled_cache = None
# scan a directory for ext_list and not matching the regexp provided in regIgnoreList
# return the result in 'files'
def scandir(directory, files, ext_list = None, regIgnoreList = None, onlyFolders = False):
	global regIgnoreListCompiled_cache
	names = os.listdir(directory)
	for name in names:
		if regIgnoreList and name in regIgnoreList:
			continue
		srcname = os.path.join(directory, name)
		try:
			if os.path.isdir(srcname):
				if onlyFolders and srcname not in files:
					files.append(srcname)
				scandir(srcname,files,ext_list,regIgnoreList)
			elif not onlyFolders and os.path.isfile(srcname) and good_ext(srcname[srcname.rfind('.')+1:], ext_list):
				if srcname not in files:
					files.append(srcname)
		except IOError, error:
			# silent failing...
			continue


try:
	os.unlink("pylint_blacksheep.html")
except Exception:
	pass
files = []
scandir("../", files, ["py"], [".hg", "resources", "testing", "user", "dependencies", "doc"])
sfiles = ""
for f in files:
	if '__' not in f:
		sfiles +="\"%s\" " % f
sfiles = sfiles[:len(sfiles)-1]
cmd = "pylint --rcfile=pylintrc %s >> pylint_blacksheep.html" % sfiles
os.system(cmd)