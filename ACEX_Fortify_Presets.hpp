class ACEX_Fortify_Presets {
    class TAW_FIELD {
        displayName = "Field Building";
        objects[] = {
            {"Land_BagFence_Long_F", 50},
            {"Land_BagFence_Round_F", 50},
            {"Land_BagBunker_Small_F", 150}
        };
    };
    class TAW_FOB_Barriers {
        displayName = "FOB (Barriers)";
        objects[] = {
            {"Land_HBarrierTower_F", 400},
            {"Land_HBarrierWall_corner_F", 225},
            {"Land_HBarrierWall4_F", 175},
            {"Land_HBarrierWall6_F", 250},
            {"Land_HBarrierWall_1_F", 50},
            {"Land_HBarrierWall_3_F", 100},
            {"Land_HBarrierWall_5_F", 150},
            {"Land_HBarrierWall_corridor_F", 225},
            {"Land_HBarrierWall_Big_F", 250},
        };
    };
    class TAW_FOB_Concrete {
        displayName = "FOB (Concrete)";
        objects[] = {
            {"Land_CncWall4_F", 200},
            {"Land_CncWall1_F", 50},
            {"Land_CncBarrierMedium_F", 50},
            {"Land_CncBarrierMedium4_F", 125},
        };
    };
    class TAW_FOB_Misc {
        displayName = "FOB (Misc)";
        objects[] = {
            {"Land_Razorwire_F", 100},
            {"Land_Shoot_House_Wall_F", 100},
            {"Land_Shoot_House_Wall_Crouch_F", 50},
            {"Land_BarGate_F", 100},
            {"Land_BagFence_Long_F", 50},
            {"Land_BagFence_Round_F", 50},
            {"Land_BagBunker_Small_F", 200},
        };
    };
    class TAW_FOB_Special {
        displayName = "FOB (Special)";
        objects[] = {
            {"TAW_Terminal_Air_Laptop", 100},
            {"TAW_Terminal_Car_Laptop", 100},
            {"TAW_Terminal_Boat_Laptop", 100},
            {"TAW_Terminal_Air_Spawn", 100},
            {"TAW_Terminal_Car_Spawn", 100},
            {"TAW_Terminal_Boat_Spawn", 100},
        };
    };
    class TAW {
        displayName = "TAW (Standard Preset)";
        objects[] = {
            //FOB Building (Requires FOB nearby)
            {"Land_HBarrierTower_F", 400, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_corner_F", 225, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall4_F", 175, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall6_F", 250, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_1_F", 50, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_3_F", 100, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_5_F", 150, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_corridor_F", 225, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_Big_F", 250, "TAW_FOB_Barriers"},
            //FOB Concrete Building
            {"Land_CncWall4_F", 200, "TAW_FOB_Concrete"},
            {"Land_CncWall1_F", 50, "TAW_FOB_Concrete"},
            {"Land_CncBarrierMedium_F", 50, "TAW_FOB_Concrete"},
            {"Land_CncBarrierMedium4_F", 125, "TAW_FOB_Concrete"},
            //Misc FOB Items
            {"Land_Razorwire_F", 100, "TAW_FOB_Misc"},
            {"Land_Shoot_House_Wall_F", 100, "TAW_FOB_Misc"},
            {"Land_Shoot_House_Wall_Crouch_F", 50, "TAW_FOB_Misc"},
            {"Land_BarGate_F", 100, "TAW_FOB_Misc"},
            {"Land_BagFence_Long_F", 50, "TAW_FOB_Misc"},
            {"Land_BagFence_Round_F", 50, "TAW_FOB_Misc"},
            {"Land_BagBunker_Small_F", 150, "TAW_FOB_Misc"},
            //Special FOB Items
            {"TAW_Terminal_Air_Laptop", 300, "TAW_FOB_Special"},
            {"TAW_Terminal_Car_Laptop", 300, "TAW_FOB_Special"},
            {"TAW_Terminal_Boat_Laptop", 300, "TAW_FOB_Special"},
            {"TAW_Terminal_Air_Spawn", 25, "TAW_FOB_Special"},
            {"TAW_Terminal_Car_Spawn", 25, "TAW_FOB_Special"},
            {"TAW_Terminal_Boat_Spawn", 25, "TAW_FOB_Special"},
            //Field Building (Doesn't require FOB nearby)
            {"Land_BagFence_Long_F", 50, "TAW_FIELD"},
            {"Land_BagFence_Round_F", 50, "TAW_FIELD"},
            {"Land_BagBunker_Small_F", 150, "TAW_FIELD"}
        };
    };
};
