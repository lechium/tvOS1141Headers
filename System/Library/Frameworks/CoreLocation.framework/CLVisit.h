/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CLVisit : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _arrivalDate;
	NSDate* _departureDate;
	double _horizontalAccuracy;
	NSDate* _detectionDate;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) BOOL hasArrivalDate; 
@property (nonatomic,readonly) BOOL hasDepartureDate; 
@property (nonatomic,copy,readonly) NSDate * detectionDate;                    //@synthesize detectionDate=_detectionDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * arrivalDate;                      //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * departureDate;                    //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
-(CLLocationCoordinate2D)coordinate;
-(double)horizontalAccuracy;
-(BOOL)hasArrivalDate;
-(NSDate *)arrivalDate;
-(NSDate *)departureDate;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 ;
-(NSDate *)detectionDate;
-(BOOL)hasDepartureDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

