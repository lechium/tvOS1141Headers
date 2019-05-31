/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface RTStateTransition : NSObject <NSSecureCoding> {

	NSMutableArray* _listTransitions;

}

@property (nonatomic,retain) NSMutableArray * listTransitions;              //@synthesize listTransitions=_listTransitions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(long long)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addStateTransitionOneTimeTransFromStateTransition:(id)arg1 ;
-(void)submitTransition:(id)arg1 ;
-(void)showTransition;
-(void)cleanTransition:(double)arg1 ;
-(id)getPredTrans:(double)arg1 duration:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4 ;
-(NSMutableArray *)listTransitions;
-(void)setListTransitions:(NSMutableArray *)arg1 ;
@end

