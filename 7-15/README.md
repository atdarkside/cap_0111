# @cap_0111's Kadai .

今回の課題、6-17の[sort.c](https://github.com/atdarkside/cap_0111/tree/master/6-17)とほぼ同じです。<br>
大きく違うのは以下の部分

```c
	if(strcmp(arr[loop2],arr[loop]) > 0){
		strcpy(change,arr[loop]);
		strcpy(arr[loop],arr[loop2]);
		strcpy(arr[loop2],change);
	}
```
if文の中の```strcmp()```は辞書だとどっちが早いかを出してくれる優れもの。<br>
言ってしまえば今回の課題の答えです笑<br>
第一引数の文字列より第二引数の文字列の方が早ければ 0より大きい数字 が返ってきます。<br>
同じであれば 0 です。

今回strcmpで返ってきたのが 1以上　だった場合、二つの文字列の位置を入れ替えるわけですが以前のように単純に ? = ? ;で入れ替えようとなぜかエラーを吐きやがるので```strcpy()```を使います。<br>
第二引数の中身を第1引数にコピーするだけの関数です。<br>
つまり ```A = B;``` と書きたいところを ```strcpy(A,B);``` と書けるわけです!!!<br>
<br>
<br>
sort.cの原理が解らない場合は「ソートアルゴリズム」で検索するとわかりやすいと思います。
