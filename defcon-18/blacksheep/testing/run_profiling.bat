@echo off
del stat.prof stat.png stat.dot
cd ..
python -m cProfile -o testing/stat.prof sheep.py
pushd testing
python -m gprof2dot -f pstats -o stat.dot stat.prof
dot -o stat.png -Tpng stat.dot