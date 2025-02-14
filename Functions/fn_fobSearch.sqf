/*
    Function: fn_fobNearby
    Description:
        Checks an area around an object to see if any specific object is nearby.

    Parameters:
        _position - The object to check around [POSITION]
        _radius - The radius to check within [NUMBER]
        _type - The type of object to look for [STRING]

    Returns:
        ARRAY - List of nearby objects
*/

params ["_position"];

private _nearbyFOBs = nearestObjects [_position, [TAW_FOB_List], TAW_FOB_Range];

_nearbyFOBs;