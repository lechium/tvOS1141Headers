/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMPerfProfiler : NSObject {

	NSMutableArray* _sinks;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(void)addSink:(id)arg1 withBehavior:(id)arg2 ;
-(void)logMeasurement:(IMPerfMeasurement_t*)arg1 ;
@end
