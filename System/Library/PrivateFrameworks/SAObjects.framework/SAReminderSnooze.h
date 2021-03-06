/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAReminderDateTimeTriggerOffset, NSArray;

@interface SAReminderSnooze : SABaseClientBoundCommand

@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * offset; 
@property (nonatomic,copy) NSArray * reminderIdentifierList; 
+(id)snooze;
+(id)snoozeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(SAReminderDateTimeTriggerOffset *)offset;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)reminderIdentifierList;
-(void)setReminderIdentifierList:(NSArray *)arg1 ;
@end

