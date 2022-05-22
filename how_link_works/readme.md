## CSAPP 里的 link 章节(第 7 章)

### 实践中遇到的问题

cc1 找不到

搜了一些资料, 参考[这里](https://unix.stackexchange.com/a/77783), 使用`cc -print-prog-name=cc1`, 找到 cc1 的路径

所以得用

` $(cc -print-prog-name=cc1) main.i -Og -o main.s`来生成 main.s 文件

到了链接这步, 又出问题

> ld: warning: cannot find entry symbol \_start;

搜了一下资料

...

`ld -o prog --dynamic-linker /lib/x86_64-linux-gnu/ld-2.28.so main.o sum.o /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/x86_64-linux-gnu/crtn.o -lc`

没错, 就是上面这一串, 这是在 wsl2 环境下的, `/lib/x86_64-linux-gnu`不同系统会不一样

这是在一个个人博客找到的, 作者也经历了类似的事情

(这是博客文章[地址](http://xcraft.tech/2020/11/15/ICS/ICS_Lab3/)

现在的我还是不理解这一串的意义, 先放着吧
