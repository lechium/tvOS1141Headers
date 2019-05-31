/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIInterfaceActionPresenting;
@class UIView, UIViewController, NSString, UIImage, NSPointerArray, UIInterfaceActionRepresentationView, UIInterfaceActionVisualStyle, UIColor;

@interface UIInterfaceAction : NSObject <NSCopying> {

	BOOL _enabled;
	BOOL _preferred;
	BOOL _focused;
	UIView* _customContentView;
	long long _type;
	UIViewController* _customContentViewController;
	NSString* _title;
	long long _titleAlignment;
	NSString* _classificationTitle;
	UIImage* _leadingImage;
	UIImage* _trailingImage;
	/*^block*/id _handler;
	NSPointerArray* _weakDisplayPropertyObservers;
	UIInterfaceActionRepresentationView* __visualRepresentation;
	id<_UIInterfaceActionPresenting> __presentingController;
	UIInterfaceActionVisualStyle* _visualStyle;
	UIColor* _titleTextColor;
	UIColor* _imageTintColor;
	CGSize _leadingImageLayoutSize;
	CGSize _trailingImageLayoutSize;

}

@property (nonatomic,retain) UIViewController * customContentViewController;                                                                   //@synthesize customContentViewController=_customContentViewController - In the implementation block
@property (nonatomic,copy) id handler;                                                                                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long type;                                                                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSPointerArray * weakDisplayPropertyObservers;                                                                  //@synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers - In the implementation block
@property (nonatomic,readonly) long long _typeForDeterminingViewRepresentation; 
@property (nonatomic,readonly) UIView * customContentView;                                                                                     //@synthesize customContentView=_customContentView - In the implementation block
@property (assign,setter=_setVisualRepresentation:,nonatomic,__weak) UIInterfaceActionRepresentationView * _visualRepresentation;              //@synthesize _visualRepresentation=__visualRepresentation - In the implementation block
@property (assign,setter=_setPresentingController:,nonatomic,__weak) id<_UIInterfaceActionPresenting> _presentingController;                   //@synthesize _presentingController=__presentingController - In the implementation block
@property (assign,nonatomic) CGSize leadingImageLayoutSize;                                                                                    //@synthesize leadingImageLayoutSize=_leadingImageLayoutSize - In the implementation block
@property (assign,nonatomic) CGSize trailingImageLayoutSize;                                                                                   //@synthesize trailingImageLayoutSize=_trailingImageLayoutSize - In the implementation block
@property (assign,setter=_setIsPreferred:,getter=_isPreferred,nonatomic) BOOL preferred;                                                       //@synthesize preferred=_preferred - In the implementation block
@property (assign,setter=_setIsFocused:,getter=_isFocused,nonatomic) BOOL focused;                                                             //@synthesize focused=_focused - In the implementation block
@property (setter=_setVisualStyle:,getter=_visualStyle,nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                           //@synthesize visualStyle=_visualStyle - In the implementation block
@property (setter=_setTitleTextColor:,getter=_titleTextColor,nonatomic,retain) UIColor * titleTextColor;                                       //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (setter=_setImageTintColor:,getter=_imageTintColor,nonatomic,retain) UIColor * imageTintColor;                                       //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long titleAlignment;                                                                                         //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (nonatomic,copy) NSString * classificationTitle;                                                                                     //@synthesize classificationTitle=_classificationTitle - In the implementation block
@property (nonatomic,retain) UIImage * leadingImage;                                                                                           //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,retain) UIImage * trailingImage;                                                                                          //@synthesize trailingImage=_trailingImage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                    //@synthesize enabled=_enabled - In the implementation block
+(id)actionWithTitle:(id)arg1 type:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(BOOL)changedProperties:(id)arg1 containsAny:(id)arg2 ;
+(id)actionWithCustomContentViewController:(id)arg1 ;
+(id)actionWithCustomContentView:(id)arg1 ;
+(void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(BOOL)arg1 ;
+(id)_observableDisplayProperties;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTrailingImage:(UIImage *)arg1 ;
-(void)_setTitleTextColor:(id)arg1 ;
-(void)_setImageTintColor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_titleTextColor;
-(id)_visualStyle;
-(void)_addActionDisplayPropertyObserver:(id)arg1 ;
-(void)_removeActionDisplayPropertyObserver:(id)arg1 ;
-(CGSize)_layoutSizeForImageProperty:(id)arg1 ;
-(void)_setVisualStyle:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(BOOL)_isPreferred;
-(BOOL)_isFocused;
-(long long)_typeForDeterminingViewRepresentation;
-(id)_imageTintColor;
-(long long)titleAlignment;
-(void)_setIsPreferred:(BOOL)arg1 ;
-(void)_invokeHandlerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setIsFocused:(BOOL)arg1 ;
-(void)setTitleAlignment:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 type:(long long)arg2 customContentViewController:(id)arg3 customContentView:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_notifyObserversVisualStyleDidChange;
-(void)_notifyObserversDidChangeActionProperty:(id)arg1 ;
-(UIViewController *)customContentViewController;
-(id<_UIInterfaceActionPresenting>)_presentingController;
-(void)setLeadingImage:(UIImage *)arg1 ;
-(UIView *)customContentView;
-(void)setLeadingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)leadingImageLayoutSize;
-(void)setTrailingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)trailingImageLayoutSize;
-(void)setCustomContentViewController:(UIViewController *)arg1 ;
-(NSString *)classificationTitle;
-(void)setClassificationTitle:(NSString *)arg1 ;
-(UIImage *)leadingImage;
-(UIImage *)trailingImage;
-(NSPointerArray *)weakDisplayPropertyObservers;
-(UIInterfaceActionRepresentationView *)_visualRepresentation;
-(void)_setVisualRepresentation:(id)arg1 ;
-(void)_setPresentingController:(id)arg1 ;
@end

