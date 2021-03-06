/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKCalendar, NSString, NSURL, NSDate;

@interface EKInviteReplyNotification : EKObject

@property (nonatomic,readonly) EKCalendar * calendar; 
@property (nonatomic,readonly) EKCalendar * inviteReplyCalendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,readonly) NSString * shareeDisplayName; 
@property (nonatomic,readonly) NSString * shareeEmailAddress; 
@property (nonatomic,readonly) NSString * shareePhoneNumber; 
@property (nonatomic,readonly) NSURL * shareeURL; 
@property (nonatomic,readonly) NSString * shareeFirstName; 
@property (nonatomic,readonly) NSString * shareeLastName; 
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) BOOL alerted; 
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
-(NSDate *)creationDate;
-(EKCalendar *)calendar;
-(unsigned long long)status;
-(NSString *)shareeDisplayName;
-(id)shareeAddressURL;
-(NSString *)shareeFirstName;
-(NSString *)shareeLastName;
-(BOOL)alerted;
-(EKCalendar *)inviteReplyCalendar;
-(NSString *)shareeEmailAddress;
-(NSString *)shareePhoneNumber;
-(NSURL *)shareeURL;
-(void)clearAlertedStatus;
-(NSString *)calendarName;
@end

