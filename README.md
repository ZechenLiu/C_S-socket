# C_S-socket
 基于C_S结构的Socket程序设计
<br/>
<br/>
Author: 刘泽辰
<br/>
<br/>
Address: CUFE http://ie.cufe.edu.cn/
<br/>
<br/>
origin code :https://download.csdn.net/download/zdm11/5612251?tdsourcetag=s_pcqq_aiomsg
<br/>
(The origin code can only be run on VC++6.0. I modified it so that it could be run on VS2017.)
<br/>
<br/>
IDE: Microsoft Visual Studio 2017 Professional
<br/>
<br/>
<br/>
## About the project
<br/>
<br/>
编写程序，完成一个简单的客户/服务器程序设计：<br/>
* 使用控制台界面，命令行格式为：<br/>
>Server.exe <TCP server port/><br/>
>Client.exe <TCP Server IP/> <TCP Server Port/><br/>
首先Server创建2个socket，分别为TCP server socket（由命令行参数指定）和UDP server socket（端口号自定义）。Server在这两个端口上侦听连接，接受来自客户端的服务请求。
