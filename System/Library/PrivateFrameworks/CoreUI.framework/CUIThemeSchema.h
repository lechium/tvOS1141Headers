/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIThemeSchema : NSObject
+(id)schemaForPlatform:(long long)arg1 ;
+(id)defaultSchema;
-(const SCD_Struct_CU28*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU31*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU31*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)partDefinitionCountForElementDefinition:(const SCD_Struct_CU31*)arg1 ;
-(unsigned long long)dimensionDefinitionCountForPartDefinition:(const SCD_Struct_CU30*)arg1 ;
-(const SCD_Struct_CU31*)elementDefinitionWithName:(id)arg1 ;
-(const SCD_Struct_CU30*)partDefinitionWithName:(id)arg1 forElementDefinition:(const SCD_Struct_CU31*)arg2 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU30*)arg1 ;
-(const SCD_Struct_CU30*)partDefinitionForWidgetName:(id)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU30*)arg1 ;
-(void)enumerateAvailableThemeAttributesInPartDefinition:(const SCD_Struct_CU30*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const SCD_Struct_CU30*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(const SCD_Struct_CU28*)categoryForElementDefinition:(const SCD_Struct_CU31*)arg1 ;
-(const SCD_Struct_CU31*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU31*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU31*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(unsigned long long)partDefinitionCountForEffectDefinition:(const SCD_Struct_CU31*)arg1 ;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU30*)arg1 ;
-(const SCD_Struct_CU31*)materialDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU31*)sortedMaterialDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU31*)materialDefinitionWithName:(id)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(unsigned long long)partDefinitionCountForMaterialDefinition:(const SCD_Struct_CU31*)arg1 ;
-(id)schemaMaterialRenditionsForPartDefinition:(const SCD_Struct_CU30*)arg1 ;
-(long long)schemaVersion;
@end

