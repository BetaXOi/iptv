package com.armite.webkit.plug;

public interface IBrowserInterface {
	public void sendKeyEvent(int keycode);
	/*EVENT_GO_CHANNEL	������CH+, CH-�����ּ��������н�����һ��Ƶ��ʱ����
EVENT_MEDIA_END	��ý�岥�����е�ý�岥�ŵ�ĩ��ʱ����
EVENT_MEDIA_BEGINING	��ý�岥�����е�ý�岥�ŵ���ʼ��ʱ����
EVENT_MEDIA_ERROR	��ý�岥�����������쳣ʱ����
EVENT_PLAYMODE_CHANGE	��ý�岥������playback mode�����ı��ʱ�򴥷�
EVENT_REMINDER	�������ж�ʱ����ʱ������
EVENT_JVM_CLIENT	����ֵҵ��ͻ��˲������ء��������˳��������״̬����ʱ����
*/
	public void notifyChannelEvent(String type,int instance_id,String channel_code,int userChannelID);
	public void notifyMediaEvent(String type,int instance_id,String mediaCode,String entryID);
	public void notifyMediaError(String type,int instance_id,int errorcode,String errordesc,String mediaCode);	
	public void notifyMediaPlayModeChange(String type,int instance_id,int new_play_mode,int new_play_rate,int old_play_mode,int old_play_rate);

	public void notifyJVMEvent(String type,int event_code,int event_result,String event_message);

	
	public void hideWebView();
	public void showWebView();
	public void hideVideoView();
	public void showVideoView();
	public void setVideoArea(int left,int top,int width,int height);
	public void setVideoMode(int mode);//������ȫ�����Ǵ���
	public void setVideoAlpha(int alpha);//����͸����
	public void quit();//�˳�Ӧ�ó���
	public void startConfig();//�������ý���
}
