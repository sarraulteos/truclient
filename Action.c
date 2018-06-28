//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	/* /////////////////////////////////////////////////////////////////////////////////////////// FILE UPLOAD - EXAMPLE 1  Straightforward use case. Works out of the box after recording /////////////////////////////////////////////////////////////////////////////////////////// */
	truclient_step("2", "File Upload Example 1", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Navigate to 'http://cgi-lib.berkeley.edu/ex/fup.html'", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Set TC.scriptDir + '\\SampleFile.txt' on upfile filebox", "snapshot=Action_2.2.inf");
		truclient_step("2.3", "Click on Press button", "snapshot=Action_2.3.inf");
	}
	/* /////////////////////////////////////////////////////////////////////////////////////////// FILE UPLOAD - EXAMPLE 2  Another straightforward example as long as  you do not click on "Select File or Drop File" or try to paste image from the browser /////////////////////////////////////////////////////////////////////////////////////////// */
	truclient_step("4", "File Upload Example 2", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Navigate to 'https://angular-file-upload.appspot.com/'", "snapshot=Action_4.1.inf");
		truclient_step("4.2", "Set TC.scriptDir + '\\TC_Technology.png' on file filebox", "snapshot=Action_4.2.inf");
		truclient_step("4.3", "Click on Submit button", "snapshot=Action_4.3.inf");
	}
	/* /////////////////////////////////////////////////////////////////////////////////////////// FILE UPLOAD - EXAMPLE 3  In case you do click on "Select File or Drop File" object during recording you need to disable or delete the step to avoid issues /////////////////////////////////////////////////////////////////////////////////////////// */
	truclient_step("6", "File Upload Example 3", "snapshot=Action_6.inf");
	{
		truclient_step("6.1", "Navigate to 'https://angular-file-upload.appspot.com/'", "snapshot=Action_6.1.inf");
		/* An example for recorded step that should be disabled\deleted in order to prevent failures. Subsquent step works correctly without dependency in this step */
		truclient_step("6.3", "Click on or Drop File", "snapshot=Action_6.3.inf");
		truclient_step("6.4", "Set TC.scriptDir + '\\TC_Technology.png' on filebox (1) filebox", "snapshot=Action_6.4.inf");
	}
	/* /////////////////////////////////////////////////////////////////////////////////////////// FILE UPLOAD - EXAMPLE 4  Sample page with multiple files upload TruClient does not support recording of multiple files, to workaround  you need to select files one by one and click on upload afterwards /////////////////////////////////////////////////////////////////////////////////////////// */
	truclient_step("8", "File Upload Example 4", "snapshot=Action_8.inf");
	{
		truclient_step("8.1", "Navigate to 'http://nervgh.github.io...xamples/simple/'", "snapshot=Action_8.1.inf");
		truclient_step("8.2", "Set TC.scriptDir + '\\TC_Technology.png' on filebox (2) filebox", "snapshot=Action_8.2.inf");
		truclient_step("8.3", "Set TC.scriptDir + '\\SampleFile.txt' on filebox (3) filebox", "snapshot=Action_8.3.inf");
		truclient_step("8.4", "Click on Upload all button", "snapshot=Action_8.4.inf");
	}
	/* /////////////////////////////////////////////////////////////////////////////////////////// FILE UPLOAD - EXAMPLE 5 Sample page in which input type file element is not visible in UI and TruClient still manages to avoid recording a click operation that should have been disabled assuming they were recorded  ////////////////////////////////////////////////////////////////////////////////////////// */
	truclient_step("10", "File Upload Example 5", "snapshot=Action_10.inf");
	{
		truclient_step("10.1", "Navigate to 'http://fineuploader.com/demos.html'", "snapshot=Action_10.1.inf");
		truclient_step("10.6", "Set TC.scriptDir + '\\TC_Technology.png' on file input filebox", "snapshot=Action_10.6.inf");
		truclient_step("10.8", "Set TC.scriptDir + '\\TC_Technology.png' on file input filebox", "snapshot=Action_10.8.inf");
		truclient_step("10.11", "Set TC.scriptDir + '\\TC_Technology.png' on file input filebox", "snapshot=Action_10.11.inf");
	}
	/* /////////////////////////////////////////////////////////////////////////////////////////// FILE UPLOAD - EXAMPLE 6  Sample page for multiple files selection and click to select files which is recorded by TruClient In this case you need to select files one by one and disable click operations to avoid failures /////////////////////////////////////////////////////////////////////////////////////////// */
	truclient_step("12", "File Upload Example 6", "snapshot=Action_12.inf");
	{
		truclient_step("12.1", "Navigate to 'http://yuilibrary.com/y...r-multiple.html'", "snapshot=Action_12.1.inf");
		truclient_step("12.2", "Click on Select Files button", "snapshot=Action_12.2.inf");
		truclient_step("12.3", "Set TC.scriptDir + '\\TC_Technology.png' on Select Files filebox", "snapshot=Action_12.3.inf");
		truclient_step("12.4", "Set TC.scriptDir + '\\SampleFile.txt' on Select Files filebox", "snapshot=Action_12.4.inf");
		truclient_step("12.5", "Click on Select Files button", "snapshot=Action_12.5.inf");
		truclient_step("12.6", "Click on Upload Files button", "snapshot=Action_12.6.inf");
	}

	return 0;
}
