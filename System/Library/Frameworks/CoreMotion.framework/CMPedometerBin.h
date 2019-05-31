/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMPedometerBin : NSObject <NSSecureCoding> {

	double _valueOut;
	double _begin;
	double _end;
	long long _state;

}

@property (nonatomic,readonly) double valueOut;                   //@synthesize valueOut=_valueOut - In the implementation block
@property (nonatomic,readonly) double begin;                      //@synthesize begin=_begin - In the implementation block
@property (nonatomic,readonly) double lowerQuartile; 
@property (nonatomic,readonly) double center; 
@property (nonatomic,readonly) double upperQuartile; 
@property (nonatomic,readonly) double end;                        //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long state;                   //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)valueOut;
-(id)initWithValueOut:(double)arg1 begin:(double)arg2 end:(double)arg3 state:(long long)arg4 ;
-(double)lowerQuartile;
-(double)upperQuartile;
-(double)center;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)state;
-(double)begin;
-(double)end;
@end

