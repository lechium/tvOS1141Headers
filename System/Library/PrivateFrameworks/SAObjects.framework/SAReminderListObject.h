/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAReminderRecurrence, SAReminderTrigger, NSArray, NSNumber;

@interface SAReminderListObject : SADomainObject

@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,retain) SAReminderTrigger * reminderTrigger; 
@property (nonatomic,copy) NSArray * reminders; 
@property (nonatomic,copy) NSArray * remindersToCreate; 
@property (nonatomic,copy) NSNumber * totalNumOfReminders; 
+(id)listObject;
+(id)listObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)encodedClassName;
-(SAReminderRecurrence *)recurrence;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(NSArray *)reminders;
-(void)setReminders:(NSArray *)arg1 ;
-(SAReminderTrigger *)reminderTrigger;
-(void)setReminderTrigger:(SAReminderTrigger *)arg1 ;
-(NSArray *)remindersToCreate;
-(void)setRemindersToCreate:(NSArray *)arg1 ;
-(NSNumber *)totalNumOfReminders;
-(void)setTotalNumOfReminders:(NSNumber *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
@end
