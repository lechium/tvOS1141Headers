/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVDeckImageView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLParadePreviewElement;

@interface TVLParadeView : TVDeckImageView <ATVUpdatable> {

	TVLParadePreviewElement* _paradeElement;

}

@property (nonatomic,retain) TVLParadePreviewElement * paradeElement;                //@synthesize paradeElement=_paradeElement - In the implementation block
@property (assign,getter=isPreviewPaused,nonatomic) BOOL previewPaused; 
-(void)layoutSubviews;
-(id)initWithParadePreviewElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(TVLParadePreviewElement *)paradeElement;
-(void)setParadeElement:(TVLParadePreviewElement *)arg1 ;
-(void)setPreviewPaused:(BOOL)arg1 ;
-(BOOL)isPreviewPaused;
@end

