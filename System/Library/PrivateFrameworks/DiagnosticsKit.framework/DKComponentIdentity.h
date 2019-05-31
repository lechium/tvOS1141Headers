/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DKCanonicalVersion, NSString, NSSet;

@interface DKComponentIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	NSString* _domain;
	DKCanonicalVersion* _version;
	NSSet* _resources;

}

@property (nonatomic,readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) DKCanonicalVersion * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSSet * resources;                         //@synthesize resources=_resources - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)componentIdentityWithDomain:(NSString*)arg1 version:(NSString*)arg2 resources:(NSSet*)arg3 ;
+(id)componentIdentityWithType:(NSString*)arg1 identifier:(NSString*)arg2 version:(NSString*)arg3 resources:(NSSet*)arg4 ;
-(NSSet *)resources;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)type;
-(NSString *)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DKCanonicalVersion *)version;
-(BOOL)isNewerThan:(id)arg1 ;
-(id)initWithDomain:(NSString*)arg1 version:(NSString*)arg2 resources:(NSSet*)arg3 ;
-(id)initWithType:(NSString*)arg1 identifier:(NSString*)arg2 version:(NSString*)arg3 resources:(NSSet*)arg4 ;
-(BOOL)isEqualToComponentIdentity:(id)arg1 ;
@end

