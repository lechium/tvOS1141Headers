/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPRatingCommand : MPRemoteCommand {

	float _minimumRating;
	float _maximumRating;

}

@property (assign,nonatomic) float minimumRating;              //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) float maximumRating;              //@synthesize maximumRating=_maximumRating - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setMinimumRating:(float)arg1 ;
-(void)setMaximumRating:(float)arg1 ;
-(id)newCommandEventWithRating:(float)arg1 ;
-(float)minimumRating;
-(float)maximumRating;
@end

