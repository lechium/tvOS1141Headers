/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAReminderSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * reminderLists; 
@property (nonatomic,copy) NSArray * reminders; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)reminderLists;
-(void)setReminderLists:(NSArray *)arg1 ;
-(NSArray *)reminders;
-(void)setReminders:(NSArray *)arg1 ;
@end

