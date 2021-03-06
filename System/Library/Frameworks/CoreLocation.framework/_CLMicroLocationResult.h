/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLMicroLocation, NSString;

@interface _CLMicroLocationResult : NSObject <NSCopying, NSSecureCoding> {

	_CLMicroLocation* _microlocation;
	double _probability;
	NSString* _domain;

}

@property (nonatomic,readonly) _CLMicroLocation * microlocation;              //@synthesize microlocation=_microlocation - In the implementation block
@property (nonatomic,readonly) double probability;                            //@synthesize probability=_probability - In the implementation block
@property (nonatomic,readonly) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)microLocationResultWithDictionary:(id)arg1 ;
-(id)initWithMicroLocation:(id)arg1 probability:(double)arg2 domain:(id)arg3 ;
-(id)initWithMicroLocation:(id)arg1 probability:(double)arg2 ;
-(id)jsonObject;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_CLMicroLocation *)microlocation;
-(double)probability;
@end

