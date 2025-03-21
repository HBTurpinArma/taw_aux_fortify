/*
    Function: TAW_fnc_supplies_getValue
    Description:
        Finds and returns the value of a supply class, otherwise returns a default value.

    Parameters:
        _object - The object to check around [OBJECT]

    Returns:
        INTEGER - Value of the supplies found.
*/

params ["_object"];

//Default value
private _supplyValue = 200; 

//Find the classname in the 'TAW_Supplies_List' array and adjust the supply value.
{
    private _classname = typeOf _object;
    if (_classname == _x select 0) exitWith {
        _supplyValue = _x select 1;
    };
} forEach TAW_Supplies_List;


//Return supply value
_supplyValue