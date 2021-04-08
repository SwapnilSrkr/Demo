//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://www.google.com/'", "snapshot=Action_1.inf");
	truclient_step("3", "Click on Search combobox", "snapshot=Action_3.inf");
	truclient_step("4", "Type GIT in Search combobox", "snapshot=Action_4.inf");
	truclient_step("7", "Click on Search combobox", "snapshot=Action_7.inf");
	truclient_step("8", "Press key Enter on Search combobox", "snapshot=Action_8.inf");

	return 0;
}
