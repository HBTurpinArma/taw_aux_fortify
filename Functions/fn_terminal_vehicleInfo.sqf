/*
    Function: TAW_fnc_terminal_vehicleInfo
    Description:
        Returns information in an array about a specific class name from Config >> "CfgVehicles".

    Parameters:
        _class_name - The classname to gather information about [STRING]

    Returns:
        ARRAY - cfgVehicle Information
			0: classname
			1: scope
			2: picture
			3: displayname
			4: vehicleclass
			5: side
			6: faction
			7: Base / Superclass
*/

params ["_class"];

if(_class == "") exitWith {[]}; //Bad class passed.
if(!isClass (configFile >> "CfgVehicles" >> _class)) exitWith {[]}; //Class doesn't exist in CfgVehicles

//Fetch
private _scope = getNumber(configFile >> "CfgVehicles" >> _class >> "scope");
//TODO: Add a check for the picture to see if they exist and give a placeholder if it doesnt.
private _picture = getText(configFile >> "CfgVehicles" >> _class >> "picture");
private _displayName = getText(configFile >> "CfgVehicles" >> _class >> "displayName");
private _vehicleClass = getText(configFile >> "CfgVehicles" >> _class >> "vehicleClass");
private _side = getNumber(configFile >> "CfgVehicles" >> _class >> "side");
private _faction = getText(configFile >> "CfgVehicles" >> _class >> "faction");
private _superClass = configName(inheritsFrom (configFile >> "CfgVehicles" >> _class));

//Return
[_class, _scope, _picture, _displayName, _vehicleClass, _side, _faction, _superClass];