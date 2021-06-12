/*
 * Copyright 2021 
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include "ScriptMgr.h"
#include "Player.h"
#include "InstanceScript.h"
#include "instance_Heart_Of_The_Forest.cpp"
#include "zone_Heart_Of_The_Forest.h"
#include "Objects_Heart_Of_The_Forest.h"
#include "npc_Heart_Of_The_Forest.h"

struct instance_Heart_Of_The_Forest : public InstanceScript
{
    instance_Heart_Of_The_Forest(InstanceMap* map) : InstanceScript(map) { }
};

void AddSC_instance_Heart_Of_The_Forest()
{
    RegisterInstanceScript(instance_Heart_Of_The_Forest, 12858);
};



    void OnGameObjectCreate(GameObject* go) override
    {
        switch (go->GetEntry())
        {
        case GO_BRICKDOOR_LEFT:
            brickDoorLeft = go->GetGUID();
            break;