/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class TVLBasketballScoreboardView, TVLBasketballCourtView;

@interface TVLBasketballPreviewView : UIView {

	TVLBasketballScoreboardView* _scoreboardView;
	TVLBasketballCourtView* _courtView;

}

@property (nonatomic,retain) TVLBasketballScoreboardView * scoreboardView;              //@synthesize scoreboardView=_scoreboardView - In the implementation block
@property (nonatomic,retain) TVLBasketballCourtView * courtView;                        //@synthesize courtView=_courtView - In the implementation block
-(void)layoutSubviews;
-(id)initWithDictionary:(id)arg1 ;
-(TVLBasketballScoreboardView *)scoreboardView;
-(void)setScoreboardView:(TVLBasketballScoreboardView *)arg1 ;
-(TVLBasketballCourtView *)courtView;
-(void)setCourtView:(TVLBasketballCourtView *)arg1 ;
@end

