/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIColor, _UITabBarItemAppearanceStorage;

@interface _UITabBarAppearanceStorage : NSObject {

	UIImage* backgroundImage;
	UIImage* shadowImage;
	UIImage* selectionIndicatorImage;
	UIColor* barTintColor;
	UIColor* selectedImageTintColor;
	_UITabBarItemAppearanceStorage* tabItemAppearanceStorage;
	UIColor* _unselectedImageTintColor;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) UIColor * unselectedImageTintColor;                                     //@synthesize unselectedImageTintColor=_unselectedImageTintColor - In the implementation block
@property (nonatomic,retain) _UITabBarItemAppearanceStorage * tabItemAppearanceStorage; 
-(UIImage *)backgroundImage;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(UIColor *)selectedImageTintColor;
-(void)setTabItemAppearanceStorage:(_UITabBarItemAppearanceStorage *)arg1 ;
-(_UITabBarItemAppearanceStorage *)tabItemAppearanceStorage;
-(id)_tabItemAppearanceStorage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
-(UIColor *)unselectedImageTintColor;
-(void)setUnselectedImageTintColor:(UIColor *)arg1 ;
@end

