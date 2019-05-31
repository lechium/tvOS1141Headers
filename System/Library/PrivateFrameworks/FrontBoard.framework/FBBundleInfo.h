/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSURL, NSUUID;

@interface FBBundleInfo : NSObject <BSDescriptionProviding> {

	NSString* _displayName;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleType;
	NSURL* _bundleURL;
	unsigned long long _sequenceNumber;
	NSUUID* _cacheGUID;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSURL * bundleURL;                       //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleVersion;                  //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleType;                     //@synthesize bundleType=_bundleType - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * cacheGUID;                        //@synthesize cacheGUID=_cacheGUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleVersion;
-(unsigned long long)sequenceNumber;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSString *)displayName;
-(NSString *)bundleType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2 ;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(NSUUID *)cacheGUID;
-(id)_initWithBundleProxy:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3 ;
@end

