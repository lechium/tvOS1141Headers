/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationSink.h>

@interface NSBlockObservationSink : NSObservationSink {

	id _block;
	int _tag;
	id _observers;

}
-(void)_receiveBox:(id)arg1 ;
-(id*)_observerStorage;
-(id)initWithBlock:(id)arg1 tag:(int)arg2 ;
-(void)dealloc;
@end

