/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAccessControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSArray;

@interface HMAssistantAccessControl : HMAccessControl <NSSecureCoding, NSCopying, NSMutableCopying> {

	BOOL _enabled;
	unsigned long long _options;
	NSSet* _accessories;

}

@property (getter=isEnabled,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long options;                 //@synthesize options=_options - In the implementation block
@property (copy,readonly) NSArray * accessories; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(BOOL)isAccessorySupported:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)shortDescription;
-(NSArray *)accessories;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 ;
@end

