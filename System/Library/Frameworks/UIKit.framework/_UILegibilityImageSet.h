/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface _UILegibilityImageSet : NSObject {

	UIImage* _image;
	UIImage* _shadowImage;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;              //@synthesize shadowImage=_shadowImage - In the implementation block
+(id)imageFromImage:(id)arg1 withShadowImage:(id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)imageSetWithOrientation:(long long)arg1 ;
-(id)initWithImage:(id)arg1 shadowImage:(id)arg2 ;
-(id)imageSetFlippedForRightToLeft;
@end

