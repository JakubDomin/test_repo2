Instalation description of tools required for unit testing in Ceedling on Windows
========

	gcc:
		- install MinGW-w64 from mingw-w64.org, it comes with support for GCC compiler on Windows
		- add bin folder of MinGW-w64 to your system PATH
		
	git:
		- go to https://git-scm.com/download/win and the download will start automatically
		- add .../git/cmd to your system PATH
	
	ruby: 
		- versions newer than 3.0.* seem to have problems with common_defines alias
		- ruby installer can be found on rubyinstaller.org
		- ruby executables need to be in system PATH
		
	ceedling:
		- once previous applications have been installed run this in the command line:
			gem install ceedling
		- it will automatically install Ceedling, CMock, Unity and CException





Usage Documentation
===================
