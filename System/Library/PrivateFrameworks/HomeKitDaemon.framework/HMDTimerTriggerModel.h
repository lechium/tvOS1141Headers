/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSDate, NSData, NSString;

@interface HMDTimerTriggerModel : HMDTriggerModel

@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSData * fireDateTimeZone; 
@property (nonatomic,copy) NSString * significantEvent; 
@property (nonatomic,copy) NSData * significantEventOffset; 
@property (nonatomic,copy) NSData * fireRepeatInterval; 
@property (nonatomic,copy) NSData * recurrences; 
+(id)properties;
-(id)createPayload;
@end

