# Hanbunkoukan
連結リストを用いて文字列を半分に分けて交換するプログラム。  
  
まず 標準入力 (端末等) から 1 行の文字列を受け取り、先頭の文字ほどリストの先頭側に保持するようにして、文字の単方向リストを作る。  
このときの文字数を N とし、リストの要素をリストの先頭から [N/2] 番目までの一続きの要素と、[N/2] + 1 番目から末尾である N 番目  
までの一続きの要素を交換するプログラムを作成した。  
  
gcc -Wall -std=c99 -o hanbunkoukan hanbunkoukan.c  
./hanbunkoukan tokyo  
kyoto  
  
./hanbunkoukan yuyakekoyake  
koyakeyuyake  
