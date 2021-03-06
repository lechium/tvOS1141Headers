/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVPBoundaryTimeObserverInfo : NSObject {

	NSArray* _times;
	/*^block*/id _handler;
	id _tokenFromAVPlayer;

}

@property (nonatomic,copy) NSArray * times;                     //@synthesize times=_times - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) id tokenFromAVPlayer;              //@synthesize tokenFromAVPlayer=_tokenFromAVPlayer - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSArray *)times;
-(void)setTimes:(NSArray *)arg1 ;
-(id)tokenFromAVPlayer;
-(void)setTokenFromAVPlayer:(id)arg1 ;
@end

