/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class SSVPlayActivityController, ICRadioGetTracksRequest, NSString;

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation {

	SSVPlayActivityController* _playActivityController;
	ICRadioGetTracksRequest* _request;
	NSString* _siriAssetInfo;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)execute;
-(id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3 ;
-(void)_runStep:(id)arg1 withFinishHandler:(/*^block*/id)arg2 ;
-(id)_cacheTracksForStep:(id)arg1 ;
@end
