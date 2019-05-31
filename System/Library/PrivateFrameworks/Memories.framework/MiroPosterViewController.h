/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UIViewController.h>

@class NSString, MiroMemory, UIImage, UIImageView, MiroTitleSubtitleView, PHAsset;

@interface MiroPosterViewController : UIViewController {

	BOOL _preventRotation;
	BOOL _isRotating;
	NSString* _titleFontName;
	MiroMemory* _memory;
	double _titleScale;
	UIImage* _image;
	UIImageView* _imageView;
	MiroTitleSubtitleView* _titleSubtitleView;
	NSString* _titleText;
	NSString* _subtitleText;
	PHAsset* _asset;
	CGRect _landscapeFraming;
	CGRect _portraitFraming;

}

@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) MiroTitleSubtitleView * titleSubtitleView;              //@synthesize titleSubtitleView=_titleSubtitleView - In the implementation block
@property (assign,nonatomic) CGRect landscapeFraming;                                //@synthesize landscapeFraming=_landscapeFraming - In the implementation block
@property (assign,nonatomic) CGRect portraitFraming;                                 //@synthesize portraitFraming=_portraitFraming - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                        //@synthesize isRotating=_isRotating - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                   //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * subtitleText;                                //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSString * titleFontName;                               //@synthesize titleFontName=_titleFontName - In the implementation block
@property (assign,nonatomic,__weak) MiroMemory * memory;                             //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic) double titleScale;                                      //@synthesize titleScale=_titleScale - In the implementation block
@property (assign,nonatomic) BOOL preventRotation;                                   //@synthesize preventRotation=_preventRotation - In the implementation block
+(id)newPosterViewControllerWithTextFieldSize:(CGSize)arg1 ;
+(double)biggestScreenPixelDimension;
-(NSString *)titleText;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(BOOL)isRotating;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(NSString *)titleFontName;
-(void)setTitleFontName:(NSString *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(double)titleScale;
-(void)setTitleScale:(double)arg1 ;
-(void)setTitleSubtitleView:(MiroTitleSubtitleView *)arg1 ;
-(MiroTitleSubtitleView *)titleSubtitleView;
-(void)assignImageFraming;
-(void)setLandscapeFraming:(CGRect)arg1 ;
-(void)setPortraitFraming:(CGRect)arg1 ;
-(void)fetchImageAsynchronously;
-(CGSize)sizeForImage;
-(CGRect)landscapeFraming;
-(CGRect)portraitFraming;
-(BOOL)preventRotation;
-(void)setIsRotating:(BOOL)arg1 ;
-(void)setPreventRotation:(BOOL)arg1 ;
@end

