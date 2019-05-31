/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOMapItemParentVenue : NSObject {

	unsigned long long _businessID;
	int _featureType;

}

@property (nonatomic,readonly) unsigned long long businessID;              //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) int featureType;                            //@synthesize featureType=_featureType - In the implementation block
-(int)featureType;
-(unsigned long long)businessID;
-(id)initWithBusinessID:(unsigned long long)arg1 featureType:(int)arg2 ;
-(id)initWithLocatedInsideInfo:(id)arg1 ;
@end

