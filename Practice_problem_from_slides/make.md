### 1. Know what commands will be executed for a target, without rebuilding

`make -n`

### 2. Force make to rebuild a target

`make -B`

### 4. Error handling

- `make` doesn't build anything in presence of any error
- `make -k` builds target which has no errors in their dependency tree
- `make -i` simply ignores lines which produce errors

### 5. Recursive Assignment

- `make -f makefile1` : prints "Hello", as A is assigned B's value using _recursive_ assignment.
- `make -f makefile2` : prints blank output, as A is assigned B's value using _evaluate once_ assignent.

### 6. Target-Specific Variables

```make
A = $(B)
one: B = "abra"
one:
	@echo $(A) $(B)

two: B = "cadabra"
two:
	@echo $(A) $(B)
```
