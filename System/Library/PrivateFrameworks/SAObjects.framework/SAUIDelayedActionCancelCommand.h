/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAUIDelayedActionCancelCommand : SADomainCommand

@property (nonatomic,copy) NSString * delayedActionAceId; 
+(id)delayedActionCancelCommand;
+(id)delayedActionCancelCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)delayedActionAceId;
-(void)setDelayedActionAceId:(NSString *)arg1 ;
@end

