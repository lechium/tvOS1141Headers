/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MNTracePlayerTimelineStream : NSObject {

	NSArray* _data;
	unsigned long long _nextIndex;
	double _nextUpdatePosition;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned long long nextIndex;              //@synthesize nextIndex=_nextIndex - In the implementation block
@property (nonatomic,readonly) double nextUpdatePosition;                 //@synthesize nextUpdatePosition=_nextUpdatePosition - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)triggerNextUpdate;
-(void)jumpToPosition:(double)arg1 ;
-(double)nextUpdatePosition;
-(unsigned long long)nextIndex;
@end
