def zhalan(e):
    elen = len(e)
    field = []
    for i in range(2, elen):
        if (elen % i == 0):
            field.append(i)

    for f in field:
        b = elen // f
        result = {x: '' for x in range(b)}
        for i in range(elen):
            a = i % b
            result.update({a: result[a] + e[i]})
        d = ''
        for i in range(b):
            d = d + result[i]
        d = d.lower()  # 将小写字符串赋值给变量d
        print(d)

if __name__ == '__main__':
    e = 'e c c t i y p s o y s j r a n c l o'
    zhalan(e)
