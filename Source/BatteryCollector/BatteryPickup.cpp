// N/A

#include "BatteryPickup.h"
#include "Components/StaticMeshComponent.h"

//Set default values
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);
}