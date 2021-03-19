// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeshDataExporterBPLibrary.h"
#include "MeshDataExporter.h"

UMeshDataExporterBPLibrary::UMeshDataExporterBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UMeshDataExporterBPLibrary::MeshDataExporterSampleFunction(float Param)
{
	return -1;
}

void UMeshDataExporterBPLibrary::ExportStaticMesh(UStaticMesh* StaticMesh)
{
	check(GEngine != nullptr);
	GEngine->AddOnScreenDebugMessage(-1, 5.5f, FColor::Orange, TEXT("Call ExportStaticMesh"));
	//FStaticMeshLODResourcesArray LODResourcesArray = StaticMesh->RenderData->LODResources;
	//TArray<FStaticMeshSourceModel> Models = StaticMesh->GetSourceModels();
	//TArray<FRawMesh> RawMeshes;*
	/*for(FStaticMeshSourceModel& var:Models)
	{
		FRawMesh RawMesh;
		var.LoadRawMesh(RawMesh);
		RawMeshes.Add(RawMesh);
	}*/
	
}