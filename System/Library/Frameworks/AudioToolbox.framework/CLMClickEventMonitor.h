/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/libAudioDSP.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAudioDSP.dylib/libAudioDSP.dylib-Structs.h>
@class NSMutableArray;

@interface CLMClickEventMonitor : NSObject {

	NSMutableArray* _events;
	shared_ptr<HIDEventMonitor>* _hidEventMonitor;

}

@property (retain) NSMutableArray * events;                                             //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) shared_ptr<HIDEventMonitor>* hidEventMonitor;              //@synthesize hidEventMonitor=_hidEventMonitor - In the implementation block
-(id)init;
-(id)initWithHIDDispatchQueueQOSClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(void)setHidEventMonitor:(shared_ptr<HIDEventMonitor>*)arg1 ;
-(shared_ptr<HIDEventMonitor>*)hidEventMonitor;
-(void)newClickEvent:(id)arg1 ;
-(id)eventsForMovieStartingAtMachAbsoluteTime:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 ;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
@end

