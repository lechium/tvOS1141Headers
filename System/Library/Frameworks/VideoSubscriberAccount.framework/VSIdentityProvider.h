/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, VSOptional, NSNumber, NSArray, NSURL;

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {

	NSString* _displayName;
	BOOL _prohibitedByStore;
	BOOL _developer;
	VSOptional* _uniqueID;
	VSOptional* _providerID;
	VSOptional* _providerInfo;
	NSString* _nameForSorting;
	NSNumber* _rankForSorting;
	NSArray* _supportedTemplates;
	NSArray* _supportedAuthenticationSchemes;
	NSURL* _authenticationURL;
	NSURL* _appStoreRoomURL;
	NSArray* _appAdamIDs;

}

@property (nonatomic,retain) VSOptional * uniqueID;                                               //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) VSOptional * providerID;                                             //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,retain) VSOptional * providerInfo;                                           //@synthesize providerInfo=_providerInfo - In the implementation block
@property (nonatomic,copy) NSString * nameForSorting;                                             //@synthesize nameForSorting=_nameForSorting - In the implementation block
@property (nonatomic,copy) NSNumber * rankForSorting;                                             //@synthesize rankForSorting=_rankForSorting - In the implementation block
@property (nonatomic,readonly) VSOptional * displayName; 
@property (nonatomic,copy) NSArray * supportedTemplates;                                          //@synthesize supportedTemplates=_supportedTemplates - In the implementation block
@property (nonatomic,copy) NSArray * supportedAuthenticationSchemes;                              //@synthesize supportedAuthenticationSchemes=_supportedAuthenticationSchemes - In the implementation block
@property (assign,getter=isProhibitedByStore,nonatomic) BOOL prohibitedByStore;                   //@synthesize prohibitedByStore=_prohibitedByStore - In the implementation block
@property (nonatomic,readonly) BOOL supportsTemplatesSufficientForSomeKnownPlatform; 
@property (nonatomic,readonly) BOOL supportsTemplatesSufficientForCurrentPlatform; 
@property (assign,getter=isDeveloper,nonatomic) BOOL developer;                                   //@synthesize developer=_developer - In the implementation block
@property (nonatomic,copy) NSURL * authenticationURL;                                             //@synthesize authenticationURL=_authenticationURL - In the implementation block
@property (nonatomic,copy) NSURL * appStoreRoomURL;                                               //@synthesize appStoreRoomURL=_appStoreRoomURL - In the implementation block
@property (nonatomic,copy) NSArray * appAdamIDs;                                                  //@synthesize appAdamIDs=_appAdamIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(VSOptional *)uniqueID;
-(VSOptional *)providerID;
-(void)setUniqueID:(VSOptional *)arg1 ;
-(void)setProviderID:(VSOptional *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VSOptional *)displayName;
-(VSOptional *)providerInfo;
-(NSArray *)supportedTemplates;
-(void)setDeveloper:(BOOL)arg1 ;
-(NSURL *)appStoreRoomURL;
-(NSArray *)appAdamIDs;
-(void)setAppAdamIDs:(NSArray *)arg1 ;
-(void)setRankForSorting:(NSNumber *)arg1 ;
-(BOOL)isDeveloper;
-(NSURL *)authenticationURL;
-(NSNumber *)rankForSorting;
-(void)setProviderInfo:(VSOptional *)arg1 ;
-(void)setNameForSorting:(NSString *)arg1 ;
-(void)setAuthenticationURL:(NSURL *)arg1 ;
-(void)setAppStoreRoomURL:(NSURL *)arg1 ;
-(void)setSupportedTemplates:(NSArray *)arg1 ;
-(void)setProhibitedByStore:(BOOL)arg1 ;
-(BOOL)isProhibitedByStore;
-(BOOL)supportsTemplatesSufficientForCurrentPlatform;
-(BOOL)supportsTemplatesSufficientForSomeKnownPlatform;
-(BOOL)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)arg1 ;
-(BOOL)supportsRequestsExpectingAuthenticationSchemes:(id)arg1 ;
-(NSString *)nameForSorting;
-(NSArray *)supportedAuthenticationSchemes;
-(void)setSupportedAuthenticationSchemes:(NSArray *)arg1 ;
@end

