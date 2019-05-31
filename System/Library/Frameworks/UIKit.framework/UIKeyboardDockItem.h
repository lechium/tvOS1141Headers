/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, UIImage, UIKeyboardDockItemButton, UIPanGestureRecognizer, UILongPressGestureRecognizer;

@interface UIKeyboardDockItem : NSObject {

	NSString* _identifier;
	NSString* _imageName;
	UIImage* _image;
	UIKeyboardDockItemButton* _button;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	CGPoint _touchDownPoint;

}

@property (nonatomic,retain) UIKeyboardDockItemButton * button;                                      //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) CGPoint touchDownPoint;                                                 //@synthesize touchDownPoint=_touchDownPoint - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                          //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,retain) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                                   //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIKeyboardDockItemButton * view; 
+(id)_standardGlyphColor;
+(id)_darkStyleGlyphColor;
-(BOOL)enabled;
-(UIKeyboardDockItemButton *)button;
-(void)setImage:(UIImage *)arg1 ;
-(UIKeyboardDockItemButton *)view;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(NSString *)identifier;
-(UIImage *)image;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(id)imageWithRenderConfig:(id)arg1 ;
-(id)initWithImageName:(id)arg1 identifier:(id)arg2 ;
-(NSString *)imageName;
-(void)setButton:(UIKeyboardDockItemButton *)arg1 ;
-(CGPoint)touchDownPoint;
-(void)setTouchDownPoint:(CGPoint)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
@end

