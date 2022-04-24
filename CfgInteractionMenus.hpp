/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Yesyesjo, Rashmandash
 *
 * Edited by Maletzki - AVMG.EU
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 */

class CfgInteractionMenus {
	class Tank {
		targetType=2;
		target="Tank";
		class Actions {
			class Rearm: ExileAbstractAction {
				title = "Rearm";
				condition = "!(magazinesAllTurrets _this isEqualto [])";
				action = "['RearmVehicle', _this select 0] call ExileClient_action_execute";
			};	
		};
	};
};