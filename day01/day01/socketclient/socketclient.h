//ͷ�ļ���������
//��ֹͷ�ļ��ظ�����
#pragma once

//����C++������
//�����C++����������C��׼����
#ifdef __cplusplus
extern "C"
{

#endif

//��һ�׽ӿ�
	//��ʼ������
	int socketclient_init(void** handle);
	
	//������Ϣ
	int socketclient_send(void* handle, void* buf, int len);

	//������Ϣ
	int socketclient_recv(void* handle, void* buf, int len);
	//�ͷ���Դ
	int socketclient_destory(void* handle);

#ifdef __cplusplus
}

#endif