/*
    Function: fn_fobNearby
    Description:
        Checks an area around an object to see if any specific object is nearby.

    Parameters:
        _object - The object to check around [OBJECT]
        _radius - The radius to check within [NUMBER]
        _type - The type of object to look for [STRING]

    Returns:
        BOOL - True if the any FOB is found, false otherwise
*/

params ["_object"];

private _nearbyFOBs = _object call TAW_AUX_fnc_fobSearch;

if (count _nearbyFOBs > 0) exitWith { true };

false
