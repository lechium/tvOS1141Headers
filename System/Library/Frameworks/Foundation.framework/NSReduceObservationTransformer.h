/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationTransformer.h>

@interface NSReduceObservationTransformer : NSObservationTransformer {

	/*^block*/id _reducer;
	id _accumulator;

}
+(id)reduceValue:(id)arg1 withReducer:(/*^block*/id)arg2 ;
-(void)_receiveBox:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 initialValue:(id)arg2 ;
-(void)dealloc;
-(void)finishObserving;
@end

