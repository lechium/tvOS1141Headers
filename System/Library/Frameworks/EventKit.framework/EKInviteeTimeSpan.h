/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSMutableArray;

@interface EKInviteeTimeSpan : NSObject <NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSMutableArray* _conflictedParticipants;

}

@property (nonatomic,retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictedParticipants;              //@synthesize conflictedParticipants=_conflictedParticipants - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)conflictedParticipants;
-(void)setConflictedParticipants:(NSMutableArray *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
@end
