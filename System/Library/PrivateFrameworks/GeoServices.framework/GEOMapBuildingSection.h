/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapBuildingSection <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE29* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double baseHeight; 
@property (nonatomic,readonly) double height; 
@required
-(unsigned long long)coordinateCount;
-(SCD_Struct_GE29*)coordinates;
-(double)baseHeight;
-(double)height;

@end
