#include "EfficityFunctions.h"
#include "CesiumGlobeAnchorComponent.h"

void UEfficityFunctions::MoveToLongitudeLatitudeHeightString(
    UCesiumGlobeAnchorComponent* GlobeAnchorComponent,
    const FString& Longitude,
    const FString& Latitude,
    const FString& Height)
{
    
    if (!GlobeAnchorComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveToLongitudeLatitudeHeightString: GlobeAnchorComponent is null."));
        return;
    }
    
    // Print original string values
    UE_LOG(LogTemp, Warning, TEXT("Received Strings -> Longitude: %s, Latitude: %s, Height: %s"),
        *Longitude, *Latitude, *Height);

    // Convert strings to double
    double Lon = FCString::Atod(*Longitude);
    double Lat = FCString::Atod(*Latitude);
    double H = FCString::Atod(*Height);

    // Print values to console
    // Print converted values with full precision (15 decimal places)
    UE_LOG(LogTemp, Warning, TEXT("Converted to Doubles -> Longitude: %.15f, Latitude: %.15f, Height: %.15f"),
        Lon, Lat, H);

    // Create FVector from parsed values
    FVector TargetLongitudeLatitudeHeight(Lon, Lat, H);

    // Call the original function
    GlobeAnchorComponent->MoveToLongitudeLatitudeHeight(TargetLongitudeLatitudeHeight);
}
