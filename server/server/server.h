#pragma once
#define MAX_CLIENT  10						//ͬʱ�����client��Ŀ����
#define MAX_BUF_SIZE 65535					//�������Ĵ�С
#define _WINSOCK_DEPRECATED_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
const u_short UDPSrvPort = 2345;			//Server��UDP�˿�
const char START_CMD[] = "START";
const char GETCURTIME_CMD[] = "GET CUR TIME";

//���ݸ�TCP�̵߳Ľṹ������
struct TcpThreadParam
{
	SOCKET socket;
	sockaddr_in addr;
};

DWORD WINAPI TcpServeThread(LPVOID lpParam);	//TCP�̵߳��̺߳���
DWORD WINAPI UdpServer(LPVOID lpParam);	//UDP�������߳�

