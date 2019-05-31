/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPFloatingButton.h>

@class UIImageView;

@interface TVPRoundButton : TVPFloatingButton {

	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)setCornerRadius:(double)arg1 ;
-(UIImageView *)imageView;
-(id)initWithDiameter:(double)arg1 ;
@end
