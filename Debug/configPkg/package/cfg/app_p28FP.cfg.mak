# invoke SourceDir generated makefile for app.p28FP
app.p28FP: .libraries,app.p28FP
.libraries,app.p28FP: package/cfg/app_p28FP.xdl
	$(MAKE) -f C:\Users\SURFACE\ONEDRI~1\Desktop\Lab2Idle/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\SURFACE\ONEDRI~1\Desktop\Lab2Idle/src/makefile.libs clean

