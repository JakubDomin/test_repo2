Installation of tools required for unit testing in Ceedling on Windows
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


Usage guide
===================

	creating new project:
		- ceedling new proj_name
		- it creates a new directory with a basic structure for unit testing
		├───src
		└───test
			└───support
	
	creating new module for testing:
		- ceedling module:create[module_name]
		- it creates empty module_name.c and module_name.h files in src directory, additionally creates
		empty test file test_module_name.c in test directory

	run tests:
		- ceedling test:all - creates test report in command line without coverage reports
		- ceedling gcov:all - creates test report with basic coverage report in command line
		- ceedlng utils:gcov - creates .html files with detailed coverage reports
		under <project_name>/build/artifacts/gcov
		
		
