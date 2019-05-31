/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSNumber;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSMutableDictionary* _usage;
	id _validationToken;

}

@property (nonatomic,readonly) NSNumber * staticUsage; 
@property (nonatomic,readonly) NSNumber * dynamicUsage; 
@property (nonatomic,readonly) NSNumber * onDemandResourcesUsage; 
@property (nonatomic,readonly) NSNumber * sharedUsage; 
+(id)_serverQueue;
+(id)mobileInstallationQueue;
+(id)ODRConnection;
+(id)usageFromMobileInstallationForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)ODRUsageForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)propertyQueue;
-(id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 validationToken:(id)arg3 ;
-(NSNumber *)onDemandResourcesUsage;
-(BOOL)_fetchWithXPCConnection:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)sharedUsage;
-(void)removeAllCachedUsageValues;
-(BOOL)fetchServerSideWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)fetchClientSideWithError:(id*)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)staticUsage;
-(NSNumber *)dynamicUsage;
@end
