/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload {

	BOOL _allowAccessWithoutPasscode;
	BOOL _forceAllowSupervisorAccess;
	NSArray* _whitelistedAppsAndOptions;

}

@property (nonatomic,retain) NSArray * whitelistedAppsAndOptions;              //@synthesize whitelistedAppsAndOptions=_whitelistedAppsAndOptions - In the implementation block
@property (assign,nonatomic) BOOL allowAccessWithoutPasscode;                  //@synthesize allowAccessWithoutPasscode=_allowAccessWithoutPasscode - In the implementation block
@property (assign,nonatomic) BOOL forceAllowSupervisorAccess;                  //@synthesize forceAllowSupervisorAccess=_forceAllowSupervisorAccess - In the implementation block
+(id)knownOptionsKeys;
+(id)knownUserEnabledOptionKeys;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(void)setWhitelistedAppsAndOptions:(NSArray *)arg1 ;
-(NSArray *)whitelistedAppsAndOptions;
-(BOOL)allowAccessWithoutPasscode;
-(BOOL)forceAllowSupervisorAccess;
-(void)setAllowAccessWithoutPasscode:(BOOL)arg1 ;
-(void)setForceAllowSupervisorAccess:(BOOL)arg1 ;
-(id)restrictions;
-(id)description;
@end

