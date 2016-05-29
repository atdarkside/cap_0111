# @cap_0111's Kadai .

##諸注意
windowsで実行する場合、「\」を「¥」に変えたほうが良いかもです。


##解説

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
code全文 → [all view](https://github.com/atdarkside/cap_0111/blob/master/copy.c)
