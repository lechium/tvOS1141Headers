/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMMessageChatItem.h>
@class NSDate, IMHandle;


@protocol IMMessageChatItem <NSObject>
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
@required
-(NSDate *)time;
-(IMHandle *)sender;
-(BOOL)isFromMe;
-(BOOL)failed;

@end


@class NSDate, IMHandle, IMMessage, NSString;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (nonatomic,readonly) IMMessage * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
-(NSDate *)time;
-(IMHandle *)sender;
-(IMMessage *)message;
-(BOOL)isFromMe;
-(BOOL)failed;
@end
