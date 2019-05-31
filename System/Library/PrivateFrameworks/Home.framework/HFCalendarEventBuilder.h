/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFEventBuilder.h>
#import <libobjc.A.dylib/HFTimeEventBuilder.h>

@class NSDate, NSDateComponents, NSString;

@interface HFCalendarEventBuilder : HFEventBuilder <HFTimeEventBuilder> {

	NSDate* _fireDate;
	NSDateComponents* _fireTimeComponents;

}

@property (nonatomic,copy) NSDate * fireDate;                                  //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * fireTimeComponents;              //@synthesize fireTimeComponents=_fireTimeComponents - In the implementation block
@property (nonatomic,readonly) NSDate * effectiveFireDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setFireDate:(NSDate *)arg1 ;
-(NSDate *)fireDate;
-(id)performValidation;
-(NSDate *)effectiveFireDate;
-(void)updateBaseFireDateForTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3 ;
-(id)buildNewEventFromCurrentState;
-(void)setFireTimeComponents:(NSDateComponents *)arg1 ;
-(id)effectiveFireTimeComponents;
-(NSDateComponents *)fireTimeComponents;
-(id)_fireDateForTimeComponents:(id)arg1 ;
-(id)initWithEvent:(id)arg1 ;
@end
