### 2.

`./theropod.awk -F: dinosaurs.txt`

```awk
#!/usr/bin/gawk -f

{
    if ($2 == "large theropod") {
        n = split($7, country, ", ");
        for (i=1; i<=n; ++i) { tlist[country[i]] = tlist[country[i]] " " $1 }
    }
}
END {
    asorti(tlist,slist)
    for (i in slist) {
        printf("%-15s: %s\n", slist[i], tlist[slist[i]])
    }
}
```

### 3.

`./dinotypes.awk -F: dinosaurs.txt`

```awk
#!/usr/bin/gawk -f

{
    dinotypes[$2] = dinotypes[$2] "," $1
}
END{
    for(type in dinotypes){
        printf("%s:\n",type)
        n = split(dinotypes[type], dino, ",")
        for(i=2; i<=n; ++i) {printf("\t%s\n",dino[i])}
        printf("Total count = %d\n",n-1)
    }
}
```
