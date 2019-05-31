/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface CSIndexJob : NSObject <NSSecureCoding, NSCopying> {

	long long _jobType;
	long long _jobOptions;
	NSArray* _identifiersToReindex;
	NSArray* _bundleIDs;
	NSArray* _excludedBundleIDs;
	NSString* _providerIdentifier;
	NSString* _providerType;
	NSString* _extensionBundleID;

}

@property (assign,nonatomic) long long jobType;                           //@synthesize jobType=_jobType - In the implementation block
@property (assign,nonatomic) long long jobOptions;                        //@synthesize jobOptions=_jobOptions - In the implementation block
@property (nonatomic,retain) NSArray * identifiersToReindex;              //@synthesize identifiersToReindex=_identifiersToReindex - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                         //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * excludedBundleIDs;                 //@synthesize excludedBundleIDs=_excludedBundleIDs - In the implementation block
@property (nonatomic,retain) NSString * providerIdentifier;               //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,retain) NSString * providerType;                     //@synthesize providerType=_providerType - In the implementation block
@property (nonatomic,retain) NSString * extensionBundleID;                //@synthesize extensionBundleID=_extensionBundleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProviderType:(NSString *)arg1 ;
-(NSString *)providerType;
-(long long)jobOptions;
-(NSArray *)identifiersToReindex;
-(NSString *)extensionBundleID;
-(void)setIdentifiersToReindex:(NSArray *)arg1 ;
-(id)xpc_dictionary;
-(id)initWithXPCDict:(id)arg1 ;
-(void)setJobOptions:(long long)arg1 ;
-(id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2 ;
-(NSArray *)excludedBundleIDs;
-(void)setExcludedBundleIDs:(NSArray *)arg1 ;
-(void)setExtensionBundleID:(NSString *)arg1 ;
-(id)initWithJobType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)providerIdentifier;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
@end

