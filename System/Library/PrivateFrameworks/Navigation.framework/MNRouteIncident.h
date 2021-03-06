/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteIncident;

@interface MNRouteIncident : NSObject <NSSecureCoding> {

	GEORouteIncident* _geoRouteIncident;
	double _offsetInMeters;

}

@property (nonatomic,readonly) GEORouteIncident * geoRouteIncident;              //@synthesize geoRouteIncident=_geoRouteIncident - In the implementation block
@property (nonatomic,readonly) double offsetInMeters;                            //@synthesize offsetInMeters=_offsetInMeters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithGeoRouteIncident:(id)arg1 offsetInMeters:(double)arg2 ;
-(GEORouteIncident *)geoRouteIncident;
-(double)offsetInMeters;
@end

