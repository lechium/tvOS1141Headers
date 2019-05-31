/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface RTAction : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	NSString* _name;
	long long _conditions;

}

@property (nonatomic,readonly) NSUUID * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long conditions;              //@synthesize conditions=_conditions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 conditions:(long long)arg2 identifier:(id)arg3 ;
-(id)initWithName:(id)arg1 conditions:(long long)arg2 ;
-(BOOL)isEqualToAction:(id)arg1 ;
-(id)initWithType:(long long)arg1 andOptions:(id)arg2 ;
-(long long)conditions;
@end

