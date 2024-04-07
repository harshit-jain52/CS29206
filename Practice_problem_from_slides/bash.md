### 12.

```shell
# (2 3 5 7 11 13 17 19)
read input
input=${input:1:-1}
read -a arr <<< "$input"
```

```shell
# 2 3 5 7 11 13 17 19
read -a arr
```

```shell
# 2,3,5,7,11,13,17,19
read input
input=$(echo "$input" | tr ',' ' ')
read -a arr <<< "$input"
```
