/*
һ��ѧУ��100�������100��ѧ����
��ѧ��һ�����д�����ǹرյġ�
��һ��ѧ������ΪS1������ѧУ�󣬴����еĴ����
�ڶ���ѧ��S2���ӵڶ�������񣨼�ΪL2����ʼ��ÿ����������񣬽����ǹرա�
������ѧ��S3�ӵ����������L3��ʼ��ÿ�������������ǵ�״̬�ı䣨���ŵĹ��ϣ����ŵĴ򿪣���
ѧ��S4����L4��ʼ��ÿ���ĸ��ı����ǵ�״̬��
ѧ��S5����L5��ʼ��ÿ������ı�״̬��
�������ƣ�ֱ��ѧ��S100�ı�L100��״̬��
������ѧ�����������̣���Щ������ǿ��ŵģ�
��дһ�������������⣬��ʾ���п��ŵĹ��Ӻ��룬����֮����һ���ո������
��ʾ��ʹ��һ��100��������Ԫ�ص����飬ÿ��Ԫ�ش��������ǿ���true����أ�false����������еĴ�����ǹرյġ�
*/
#include <iostream>
#include <vector>
void change(std::vector<bool>& lock, int studentnum)
{
    for (int i = studentnum - 1; i < lock.size(); i += studentnum)
    {
        lock[i] = !lock[i];
    }
}
int main()
{
    std::vector<bool> lockers(100, false); 
    for (int i = 0; i < 100; ++i) {
        lockers[i] = true;
    }
    for (int student = 2; student <= 100; ++student)
    {
       change (lockers, student);
    }
    std::cout << "���ŵĴ������룺" << std::endl;
    for (int i = 0; i < lockers.size(); ++i) {
        if (lockers[i]) {
            std::cout << (i + 1) << " "; 
        }
    }
    std::cout << std::endl;

    return 0;
}
    