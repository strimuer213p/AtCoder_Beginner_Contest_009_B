/*
��蕶
���͕x�����B�������x���ƌ����Ă������炢�����������Ă���B�~�����Ǝv�������̂͂܂����̗L��]�邨�����g���Ĕ������Ƃ��ł���B�������A���̒�̐s���Ȃ��悤�Ɏv����قǂ̂����ł����l�̐S�𔃂����Ƃ͂ł��Ȃ��B�����炨�������낤�Ƃ��A�ЂƂ��ё����̏����̔����𔃂��Ă��܂��΁A����܂ł̂悤�ɐ����Ă������Ƃ͓���Ȃ邾�낤�B
���̓x���͏����̋C�����𗝉����邽�߁A���߂ăt�@�~���[���X�g�����Ƃ����ꏊ��K�ꂽ�B���j���[���L���A�����̓��e�Ƃ��̋��z���m���߂�ƁA�Ȃ�قǋ����̈����ł���B�ǂ̗����̋��z�����ɑ���Ȃ��悤�Ȃ��̂�����A�Ƃ肠�����ł����z���������̂�I�ڂ����ƍl�����B
�������A�l���Ă݂�΁A���͉��̂��߂Ƀt�@�~���[���X�g�����ɗ����̂ł��������B�����̋C�����𗝉����悤�Ƃ����̂ɁA���z�̂��Ƃ��l�����ɍł��������̂�I�ڂ��ȂǂƁA�܂�ňӖ����Ȃ��ł͂Ȃ����B�t�@�~���[���X�g�����ɗ��������A���ꌩ�悪���ɍł����������𒍕������ƂȂ�����A���̈��]���L�܂��Ă��܂��\�������Ă���B
�Ƃ͂����A�������������獂�����̂�I��ł��̖����݂Ă݂����Ƃ����̂��m���ł���B�������A�����������ƂȂ�A���̓X�� 2 �Ԗڂɍ��������𒍕����邱�Ƃɂ��悤�B�����v���ė����̋��z�������o���Ă݂����A�����̎�ނ��������߂� 2 �Ԗڂɍ������̂�T���̂͂Ȃ��Ȃ������܂��B�����ŒT�������ɁA�v���O�����������ĂȂ�Ƃ��ł��Ȃ����낤���H
�����ƁA�v���O�����������n�߂�O�ɂЂƂ����Ă������A�ł��������z�̗�������������Ƃ��ɂ͒��ӂ��Ă��炢�����B�Ƃ����̂́A���Ƃ��� 4 ��ނ̗���������A���ꂼ��̋��z�� 100 �~�A200 �~�A300 �~�A300 �~�ł������Ƃ��ɂ́A2 �Ԗڂɍ������̂Ƃ����̂� 200 �~�̗����ɂȂ�Ƃ������Ƃ��B
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	
	for (int& x : v) {
		std::cin >> x;
	}

	std::sort(v.begin(), v.end());
	std::reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		if (v[0] != v[i]) {
			std::cout << v[i] << std::endl;
			exit(0);
		}
	}
	return 0;
}