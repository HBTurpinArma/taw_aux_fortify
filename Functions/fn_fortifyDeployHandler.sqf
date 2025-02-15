/*
    Function: fn_fortifyDeployHandler
    Description:
        Initialises the ACE Fortify options to allow users to build bases around FOBs, and engineers to build walls.
*/

[{
    params ["_unit", "_object", "_cost"];

    _return = true;

    // Check if the unit has engineer permissions
    if (!(_unit call ace_common_fnc_isEngineer)) then { systemChat "You must be an engineer to deploy fortifications."; _return = false;};
    
    // Check if the object is a fob object, if so check for nearby FOBs
    private _fieldObjects = [
        "Land_BagFence_Long_F", "Land_BagFence_Round_F"
    ];
    
    if (!(typeOf _object in _fieldObjects)) then {
        if (!(_object call TAW_AUX_fnc_fobNearby)) then { systemChat "You must be near a FOB to deploy these fortifications."; _return = false;};
    };

    _return

}] call ace_fortify_fnc_addDeployHandler;


