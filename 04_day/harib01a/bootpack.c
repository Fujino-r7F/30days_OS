/* 他のファイルで作った関数がありますとCコンパイラに教える */

void io_hlt(void);

/* 関数宣言なのに、{}がなくていきなり;を書くと、
	他のファイルにあるからよろしくね、という意味になるのです。 */

void HariMain(void)
{
	int i; /* 変数宣言。32ビットの整数型*/

	for (i = 0xa0000; i <= 0xaffff; i++) {
		write_mem8(i, 15); /* MOV BYTE [i],15 */
	}
	for (;;) {
		io_hlt(); /* これでnaskfunc.nasの_io_hltが実行されます */
	}
}


