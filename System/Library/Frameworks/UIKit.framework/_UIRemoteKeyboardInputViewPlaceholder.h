/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIRemoteKeyboardInputViewPlaceholder
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView; 
@property (nonatomic,retain) UIView * associatedView; 
@required
-(BOOL)refreshPlaceholder;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1;
-(UIView *)placeheldView;
-(UIView *)fallbackView;
-(void)setFallbackView:(id)arg1;
-(UIView *)associatedView;
-(void)setAssociatedView:(id)arg1;

@end

