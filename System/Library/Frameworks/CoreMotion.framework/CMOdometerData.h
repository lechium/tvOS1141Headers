/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber;

@interface CMOdometerData : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _distance;
	NSNumber* _currentSpeed;
	NSNumber* _averageSpeed;

}

@property (nonatomic,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSNumber * distance;                  //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) NSNumber * currentSpeed;              //@synthesize currentSpeed=_currentSpeed - In the implementation block
@property (nonatomic,readonly) NSNumber * averageSpeed;              //@synthesize averageSpeed=_averageSpeed - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)currentSpeed;
-(NSNumber *)averageSpeed;
-(id)initWithDistance:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 currentSpeed:(id)arg4 averageSpeed:(id)arg5 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSNumber *)distance;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
