/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSDictionary, NSArray, NSString;

@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSDictionary * appToItsRestrictionsMap; 
@property (nonatomic,copy) NSArray * restrictedApps; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getRestrictedAppsResponse;
+(id)getRestrictedAppsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)appToItsRestrictionsMap;
-(void)setAppToItsRestrictionsMap:(NSDictionary *)arg1 ;
-(NSArray *)restrictedApps;
-(void)setRestrictedApps:(NSArray *)arg1 ;
@end

