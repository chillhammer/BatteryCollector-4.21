// N/A

#include "BatteryPickup.h"
#include "Components/StaticMeshComponent.h"

//Set default values
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);
	BatteryPower = 150.f;
}

void ABatteryPickup::WasCollected_Implementation()
{
	Super::WasCollected_Implementation();

	Destroy();
}

float ABatteryPickup::GetPower()
{
	return BatteryPower;
}
