���뻷��
����32λ�����ϱ��롣�����XP�±���x86�汾

 ����VC++2015����ʱ˽�л���������ʱ���õ�binĿ¼�£��ڳ���������ʱ�� �ӵ�ǰ�������з���C++����ʱ��
exe����ִ�е�ʱ�� �������������ȼ������õĳ���֧�š�C++���� ������ʱ���ȼ�����ǰ�ļ��У�Ҳ���ǵ�ǰ��APPDomain

ע�⣺---------------------
hook  ��ΪWindows  ���� ��local system��Ȩ������
2  ����Windows �����ʱ�� ������ CreateService������Service type ��SERVICE_WIN32_OWN_PROCESS|SERVICE_INTERACTIVE_PROCESS, �ɽ����ķ���

3 The NoInteractiveServices value defaults to 1, which means that no service is allowed to run interactively, 
regardless of whether it has SERVICE_INTERACTIVE_PROCESS. When NoInteractiveServices is set to a 0,
 services with SERVICE_INTERACTIVE_PROCESS are allowed to run interactively.

Windows 7, Windows Server 2008 R2, Windows XP and Windows Server 2003:  
The NoInteractiveServices value defaults to 0, which means that services 
with SERVICE_INTERACTIVE_PROCESS are allowed to run interactively. 
When NoInteractiveServices is set to a nonzero value, no service started thereafter is allowed to run interactively, 
regardless of whether it has SERVICE_INTERACTIVE_PROCESS.


4 HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Windows ���� NoInteractiveServices ��Ҫ����Ϊ0

5 ��Ҫ�����ĳ��� ������UAC Ȩ�޿��ơ�������Ҫ��Ȩ�������磺������Ҫ����Ա ��ĳ���ض���ɫ��



����Windows Vista�У�������һ������Session 0 ������Session�г��ء�
����Ӧ�ó����������û���¼��ϵͳ����������Session 0 ֮���Session�У�
����Ӧ�ó���ͷ���Ҳ�͸��뿪������һ����¼���û���Session 1�У��ڶ�����Session 2�У��Դ����ơ�
��ʵ�������ڲ�ͬ��Session�У����û���ر������ȫ�������ռ䣨������������Ӧ�ķ��ʿ������ã���
�ǲ��ܻ��ഫ�ݴ�����Ϣ������UIԪ�ػ��߹���kernel����


�ο����ף�
https://code.msdn.microsoft.com/windowsapps/CSUACSelfElevation-644673d3
https://msdn.microsoft.com/en-us/library/ms682429.aspx
https://msdn.microsoft.com/en-us/library/aa379608.aspx
https://www.codeproject.com/articles/35773/subverting-vista-uac-in-both-and-bit-archite
https://msdn.microsoft.com/en-us/library/windows/desktop/ms684190%28v=vs.85%29.aspx
http://www.howtogeek.com/school/using-windows-admin-tools-like-a-pro/lesson8/
https://msdn.microsoft.com/en-us/library/windows/desktop/ms683502%28v=vs.85%29.aspx
https://msdn.microsoft.com/en-us/library/windows/desktop/ms682450%28v=vs.85%29.aspx
http://blog.csdn.net/c0ast/article/details/18285645
http://blog.csdn.net/highyyy/article/details/6132099
http://www.cnblogs.com/gnielee/archive/2010/04/07/session0-isolation-part1.html
http://www.cnblogs.com/gnielee/archive/2010/04/08/1707169.html