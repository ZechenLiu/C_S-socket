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
• 使用控制台界面，命令行格式为：<br/>
   Server.exe < TCP server port > <br>
   Client.exe < TCP Server IP > < TCP Server Port > <br>
• 首先Server创建2个socket，分别为TCP server socket（由命令行参数指定）和UDP server socket（端口号自定义）。Server在这两个端口上侦听连接，接受来自客户端的服务请求。 <br/>
•	Client程序也分别创建一个TCP和UDP socket。首先Client使用TCP socket连接TCP Server。建立连接后，Server先向Client发送自己的UDP 端口号和启动命令字符串“START”。Client在收到后为用户显示3个服务选项：<br/>
   1. Get current time（TCP）<br/>
   2. Echo Mode（UDP）<br/>
   3. Exit the program <br/>
•	对于Client和Server两端都应输出必要的日志、出错或诊断信息以进行提示。<br/>

