/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _state;
	unsigned long long _phase;
	double _fractionCompleted;

}

@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long phase;              //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) double fractionCompleted;              //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)phase;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)fractionCompleted;
-(id)initWithState:(unsigned long long)arg1 phase:(unsigned long long)arg2 fractionCompleted:(double)arg3 ;
@end

