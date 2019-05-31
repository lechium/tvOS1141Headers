/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject {

	EKObjectID* _objectID;
	double _date;

}

@property (nonatomic,retain) EKObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) double date;                        //@synthesize date=_date - In the implementation block
-(id)description;
-(double)date;
-(void)setDate:(double)arg1 ;
-(id)initWithObjectID:(id)arg1 date:(double)arg2 ;
-(EKObjectID *)objectID;
-(void)setObjectID:(EKObjectID *)arg1 ;
@end
