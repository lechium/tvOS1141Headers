/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface GEOJunction : NSObject <NSSecureCoding> {

	int _maneuverType;
	int _drivingSide;
	int _junctionType;
	NSData* _elementsData;

}

@property (nonatomic,readonly) int maneuverType;                            //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,readonly) int drivingSide;                             //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) int junctionType;                            //@synthesize junctionType=_junctionType - In the implementation block
@property (nonatomic,readonly) GEOJunctionElement* elements; 
@property (nonatomic,readonly) unsigned long long numElements; 
+(BOOL)supportsSecureCoding;
-(int)maneuverType;
-(int)drivingSide;
-(int)junctionType;
-(id)initWithStep:(id)arg1 ;
-(id)initWithManeuverType:(int)arg1 drivingSide:(int)arg2 ;
-(unsigned long long)numElements;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(GEOJunctionElement*)elements;
@end

