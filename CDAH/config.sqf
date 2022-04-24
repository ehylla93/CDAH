/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Yesyesjo, Rashmandash
 *
 * Edited by Maletzki - AVMG.EU
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 */
  
CDAH_config_Debug			= false;	// enabling debug
CDAH_config_debugCraftTimer = 5;		// time in seconds when debug is enabled
CDAH_config_craftTimer 		= false; 	// if is "false", u 'DON'T' use the Timecrafting. If you want to use the CDAH_craftTimer please install "REALTIME RESTARTER" http://www.exilemod.com/topic/17916-realtime-restarts/#comment-123819 Thx to "Michael Cullen".
CDAH_config_craftSound		= true;		// if is "false", you will hear no Craftsound.
	 
//Time for crafting in seconds for each category. Change it to what ever u want. Add to your recipes the time in the catagorys
Time_Karts_Quads 					= 15;
Time_Cars_Vans						= 20;
Time_Offroader 						= 30;
Time_Light_Trucks 					= 40;
Time_Armed_Offroader_Miltrucks 		= 50;
Time_Light_Armed_Trucks				= 60;
Time_Armed_Miltrucks				= 100;
Time_Unarmed_Helis		 			= 120;
Time_Unarmed_Planes 				= 120;
Time_category_Armed_Helis		 	= 240;
Time_category_Armed_Planes 			= 240;
Time_Wheeled_Tanks 					= 480;
Time_Light_Tanks		 			= 480;
Time_Heavy_Tanks 					= 960;
Time_UAVs							= 200;
Time_Supply_Vehicles 				= 120;
Time_Uncategorised					= 15;
 
// don't change below
private [
	'_code',
	'_function',
	'_file'
];

{
	_code = '';
	_function = _x select 0;
	_file = _x select 1;

	_code = compileFinal preprocessFileLineNumbers _file;

	missionNamespace setVariable [_function, _code];
} forEach  [
	['CDAH_util_setCraftTime', 'CDAH\code\CDAH_util_setCraftTime.sqf']
];
