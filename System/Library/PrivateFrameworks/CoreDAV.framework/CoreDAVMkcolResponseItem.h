/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem {

	NSMutableSet* _propStats;

}

@property (nonatomic,retain) NSMutableSet * propStats;              //@synthesize propStats=_propStats - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(NSMutableSet *)propStats;
-(void)addPropStat:(id)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
-(BOOL)hasPropertyError;
@end

