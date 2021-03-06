/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject

@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) double timestamp; 
+(Class)frozenClass;
-(void)setUniqueKey:(NSString *)arg1 ;
-(NSString *)uniqueKey;
-(id)copy;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 ;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
-(void)setTimestampAsDate:(id)arg1 ;
-(id)timestampAsDate;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(id)relatedEvent;
-(NSString *)opaqueKey;
@end

