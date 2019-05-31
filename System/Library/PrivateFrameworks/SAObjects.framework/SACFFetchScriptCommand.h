/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SACFFetchScriptCommand : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * fetchScriptType; 
@property (nonatomic,copy) NSArray * jsScriptIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)fetchScriptCommand;
+(id)fetchScriptCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)fetchScriptType;
-(void)setFetchScriptType:(NSString *)arg1 ;
-(NSArray *)jsScriptIdentifiers;
-(void)setJsScriptIdentifiers:(NSArray *)arg1 ;
@end

