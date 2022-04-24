/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Yesyesjo, Rashmandash
 *
 * Edited by Maletzki - AVMG.EU
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 */

class CfgExileDelayedActions {
	class RearmVehicle: Abstract {
		duration = 30;
        animation = "Exile_Acts_RepairVehicle01_Animation01";
        conditionFunction = "ExileClient _CDAH_action_rearmVehicle_condition";
        completedFunction = "ExileClient_CDAH_action_rearmVehicle_completed";
	};
};  