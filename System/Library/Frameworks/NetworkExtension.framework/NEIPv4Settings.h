/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _overridePrimary;
	NSArray* _addresses;
	NSArray* _subnetMasks;
	NSArray* _includedRoutes;
	NSArray* _excludedRoutes;
	long long _configMethod;
	NSString* _router;

}

@property (assign) long long configMethod;               //@synthesize configMethod=_configMethod - In the implementation block
@property (copy) NSString * router;                      //@synthesize router=_router - In the implementation block
@property (assign) BOOL overridePrimary;                 //@synthesize overridePrimary=_overridePrimary - In the implementation block
@property (readonly) NSArray * addresses;                //@synthesize addresses=_addresses - In the implementation block
@property (readonly) NSArray * subnetMasks;              //@synthesize subnetMasks=_subnetMasks - In the implementation block
@property (copy) NSArray * includedRoutes;               //@synthesize includedRoutes=_includedRoutes - In the implementation block
@property (copy) NSArray * excludedRoutes;               //@synthesize excludedRoutes=_excludedRoutes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(long long)configMethod;
-(NSArray *)subnetMasks;
-(NSString *)router;
-(NSArray *)includedRoutes;
-(NSArray *)excludedRoutes;
-(BOOL)overridePrimary;
-(id)initWithAddresses:(id)arg1 subnetMasks:(id)arg2 ;
-(void)setConfigMethod:(long long)arg1 ;
-(void)setRouter:(NSString *)arg1 ;
-(void)setIncludedRoutes:(NSArray *)arg1 ;
-(void)setExcludedRoutes:(NSArray *)arg1 ;
-(void)setOverridePrimary:(BOOL)arg1 ;
-(NSArray *)addresses;
-(BOOL)hasDefaultRoute;
@end

