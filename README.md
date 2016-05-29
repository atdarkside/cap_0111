# @cap_0111's Kadai .

##諸注意
windowsで実行する場合、「\」を「¥」に変えたほうが良いかもです。


##解説(課題5)

```c

void str_copy(const char s[], char t[]) {
	int i;

	for( i = 0; s[i] != '\0'; ++i ){
		t[i] = s[i];
	}
	
	t[i] = '\0';


}

```

for文でNULL文字に辿りつくまで変数sを一文字づつ変数tに移しています。<br>
このforループのみだとNULL文字をコピーできないのでループ直後に自分で付け足してあげます<br>
コード全文 → [all view](https://github.com/atdarkside/cap_0111/blob/master/copy.c)


##解説(発展問題2)
文字は[ASCIIコード表](http://e-words.jp/p/r-ascii.html)の数字に表すことができます。<br>
例 ) Aは65 aは97<br>
よって、 「a」が入ったstr[i]に+1をすると98になり、文字列として表じするときには「b」として扱われます<br>


```c
    	for( i = 0; str[i] != '\0'; ++i ){

    		if(str[i] >= 65 && str[i] <= 90 && str[i] + n > 90)str[i] -= 26;
    		if(str[i] >= 97 && str[i] <= 122 && str[i] + n > 122)str[i] -= 26;

			str[i] = str[i] + n;


		}
		str[i] = '\0';
```

課題5と同じようにまたfor文でループさせていきます。<br>
1つ目のif文の最初の2つの条件は「大文字であること」を判定しています。<br>
```str[i] + n > 90``` では大文字の範囲をオーバーするかをあらかじめ計算して判断します。<br>
オーバーしてしまう場合は計算する前に26文字分戻しておきます。<br>
2つ目のif文はこれと同様に「小文字であるか」と「小文字の範囲をオーバーするか」を判断しています<br>
<br>
そして最後にNULL文字を付けてあげればおっけいです！！<br>
コード全文 → [all view](https://github.com/atdarkside/cap_0111/blob/master/diff.c)