/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureLine.h>

@class NSString;

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine {

	SCD_Struct_GE153* _transitLink;
	unsigned long long _lineIndex;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) SCD_Struct_GE153* transitLink; 
@property (nonatomic,readonly) NSString * internalLineName; 
-(GEOTileKey)tileKey;
-(id)initWithTransitLink:(SCD_Struct_GE153*)arg1 lineIndex:(unsigned long long)arg2 ;
-(id)_containingTile;
-(SCD_Struct_GE189*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(NSString *)internalLineName;
-(SCD_Struct_GE153*)transitLink;
-(void)dealloc;
@end

