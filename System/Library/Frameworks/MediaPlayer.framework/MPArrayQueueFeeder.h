/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {

	NSArray* _queueItems;

}

@property (nonatomic,readonly) NSArray * items; 
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSArray *)items;
-(unsigned long long)itemCount;
-(id)initWithItems:(id)arg1 ;
-(long long)playbackMode;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

