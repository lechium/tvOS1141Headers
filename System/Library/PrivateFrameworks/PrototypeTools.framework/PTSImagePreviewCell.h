/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, UIView, UILabel, UIImage, NSString;

@interface PTSImagePreviewCell : UITableViewCell {

	UIImageView* _imageViewOnLight;
	UIImageView* _imageViewOnDark;
	UIView* _lightBackground;
	UIView* _darkBackground;
	UILabel* _imageNameLabel;
	UIImage* _previewImage;

}

@property (nonatomic,retain) UIImage * previewImage;              //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) NSString * imageName; 
+(double)heightForImage:(id)arg1 ;
+(void)_getLeftFrame:(CGRect*)arg1 rightFrame:(CGRect*)arg2 forImage:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
@end

