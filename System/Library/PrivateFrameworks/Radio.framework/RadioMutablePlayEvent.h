/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlayEvent.h>

@class NSDate, NSString, NSData, NSDictionary;

@interface RadioMutablePlayEvent : RadioPlayEvent

@property (nonatomic,retain) NSDate * datePlayed; 
@property (assign,nonatomic) long long endReason; 
@property (assign,nonatomic) double endTimeInTrack; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (assign,nonatomic) double startTimeInTrack; 
@property (assign,nonatomic) long long storeID; 
@property (nonatomic,copy) NSData * timedMetadata; 
@property (nonatomic,copy) NSDictionary * trackInfo; 
@property (assign,nonatomic) long long type; 
-(void)setEndReason:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSDictionary *)arg1 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(void)setDatePlayed:(NSDate *)arg1 ;
-(void)setEndTimeInTrack:(double)arg1 ;
-(void)setStartTimeInTrack:(double)arg1 ;
@end

