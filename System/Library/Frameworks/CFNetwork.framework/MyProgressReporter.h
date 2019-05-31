/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress;

@interface MyProgressReporter : NSObject {

	NSProgress* _progress;
	BOOL _receivedProgressUpdate;

}

@property (nonatomic,retain) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL receivedProgressUpdate;              //@synthesize receivedProgressUpdate=_receivedProgressUpdate - In the implementation block
-(BOOL)receivedProgressUpdate;
-(void)setReceivedProgressUpdate:(BOOL)arg1 ;
-(void)dealloc;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)stopObserving;
-(void)startObserving;
@end

