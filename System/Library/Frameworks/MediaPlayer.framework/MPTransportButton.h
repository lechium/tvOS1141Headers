/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPButton.h>

@class MPAVController;

@interface MPTransportButton : MPButton {

	MPAVController* player;

}

@property (nonatomic,retain) MPAVController * player; 
-(id)_automationID;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end

