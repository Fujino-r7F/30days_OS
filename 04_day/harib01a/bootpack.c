/* ���̃t�@�C���ō�����֐�������܂���C�R���p�C���ɋ����� */

void io_hlt(void);

/* �֐��錾�Ȃ̂ɁA{}���Ȃ��Ă����Ȃ�;�������ƁA
	���̃t�@�C���ɂ��邩���낵���ˁA�Ƃ����Ӗ��ɂȂ�̂ł��B */

void HariMain(void)
{
	int i; /* �ϐ��錾�B32�r�b�g�̐����^*/

	for (i = 0xa0000; i <= 0xaffff; i++) {
		write_mem8(i, 15); /* MOV BYTE [i],15 */
	}
	for (;;) {
		io_hlt(); /* �����naskfunc.nas��_io_hlt�����s����܂� */
	}
}


