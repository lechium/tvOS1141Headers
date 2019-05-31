/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTXParallaxView.h>

@class UIImageView, UIImage;

@interface PTXParallaxImageView : PTXParallaxView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image; 
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(id)initWithImage:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3 ;
@end
