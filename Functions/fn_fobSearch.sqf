/*
    Function: fn_fobNearby
    Description:
        Checks an area around an object to see if any specific object is nearby.

    Parameters:
        _object - The object to check around [OBJECT]
        _radius - The radius to check within [NUMBER]
        _type - The type of object to look for [STRING]

    Returns:
        ARRAY - List of nearby objects
*/

params ["_object"];

private _nearbyFOBs = nearestObjects [_object, TAW_FOB_List, TAW_FOB_Range];

_nearbyFOBs