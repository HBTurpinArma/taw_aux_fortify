# TAW Aux Fortify, Resupply & Vehicle Terminal
- Adds new Medical Container userAction to full ace heal, this can be sling loaded.
- Adds new FOB Vehicle and Container which can be slingloaded and deployed.
- Adds various FOB functionalities to allow spawning and resupply
- Adds standard ace fortify building pieces with build handlers to work with the FOB and require engineer permissions.
- Adds new terminal and menu to spawn vehicles costing fortify resources.
    - Adds various CBA settings to modify vehicles and costs that are accessable by default.
    - Adds placeable spawn locations with fortify.
    - Integrated with GOM to adjust pylons.
- Adds new ace arsenal based resupply box to work with the mission template arsenals.
    - Integrated with the vehicle terminal and spawned directly in vehicles spawned via terminal.

# Functions
- `_object call TAW_fnc_fob_isNearby` returns true if any FOB objects are within range of the object.
- `_object call TAW_fnc_fob_find` returns an array of FOB objects that are within range of the object. 
- `"All"/"Air"/"Car" call TAW_fnc_terminal_open` opens a menu that allows the users to spawn a vehicle at a nearby spawn location.
