Theta UVC Blender mdk(もどき)

* Install
管理者権限で install.bat を実行 
仮想カメラとして　theta_uvc_blender_mdk が追加されます。

* Uninstall
管理者権限で uninstall.bat を実行
仮想カメラとして追加した theta_uvc_blender_mdk を削除します。

* 使い方
run.bat をダブルクリックするとプレビューウィンドウが起動します。
ThetaのUSBライブビュー画像が取得できない場合は、
run.bat をテキストエディタで開いてdevice_idを変更してください。
ThetaのUSBライブビュー画像が取得できれば、
通常のWebカメラ(名前は theta_uvc_blender_mdk)と同様に取り扱えます。

* Usage
theta_uvc_blender_mdk.exe <device_id> <out_cam_width> <out_cam_height>
<preview_sw>
  device_id      : 入力(Theta)のID。
                   ThetaのUSBライブビュー画像が取得できない場合はこの数値を0か
				   ら順番に変えてみてください。
　out_cam_width  : 仮想カメラ画像の水平画素数
  out_cam_height : 仮想カメラ画像の垂直画素数
  preview_sw     : 0=プレビューなし, 1=プレビューあり

* 環境 
Visual Studio 2013　でビルドしているので、環境によってはランタイムが別途必要で
す。

* 免責事項
本ソフトを利用した事によるいかなる損害も作者(@zinzirogeは一切の責任を負いません。
自己の責任の上で使用して下さい。

* Author
@zinziroge
