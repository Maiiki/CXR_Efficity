#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CesiumGlobeAnchorComponent.h"
#include "EfficityFunctions.generated.h"

/**
 * Provides utility functions for working with Cesium components.
 */
UCLASS()
class EFFICITY_API UEfficityFunctions : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    /**
     * Moves the specified CesiumGlobeAnchorComponent to a given longitude, latitude, and height.
     *
     * @param GlobeAnchorComponent The CesiumGlobeAnchorComponent to move.
     * @param Longitude The longitude as a string.
     * @param Latitude The latitude as a string.
     * @param Height The height as a string.
     */
    UFUNCTION(BlueprintCallable, Category = "Efficity|Cesium")
    static void MoveToLongitudeLatitudeHeightString(
        UCesiumGlobeAnchorComponent* GlobeAnchorComponent,
        const FString& Longitude,
        const FString& Latitude,
        const FString& Height
    );
};
