### 2.

1. `grep '^\t' filename.txt`
2. `grep -e 'foo' -e 'bar' filename.txt` OR `grep -E 'foo|bar' filename.txt`
3. `grep 'foo' filename.txt | grep 'bar'` OR `grep -E 'foo.*bar|bar.*foo' filename.txt`
4. `grep 'foo.*bar' filename.txt`
5. `grep 'foo.*bar' filename.txt | grep -v 'foobar'`

### 3.

`grep -w 'printf' filename.c`

### 5.

1. `grep -vw '876' foonums.txt`
2. `grep -vwE '([5-9][0-9]{2}|[1-4][0-9]{3}|5000)' foonums.txt`
3. `grep -wE '([5-9][0-9]{2}|[1-4][0-9]{3}|5000)' foonums.txt | grep -vw '876'`

### 6.

1. `ls -l | grep '^..x'`
2. `ls -l | grep '^..x' | grep -v '^d'`

### 7.

`ls -l | grep '^-' | awk '$5 > 1000000'`

### 9.

`grep -o` : print only the matched parts, each part on separate line.

### 10.

`grep -f patterns.txt filename.txt`
