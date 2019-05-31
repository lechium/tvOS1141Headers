/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVTableViewCell.h>
#import <libobjc.A.dylib/TVLMenuItemCell.h>

@class TVLImageTextImageView, NSString;

@interface TVLImageTextImageListCell : TVTableViewCell <TVLMenuItemCell> {

	TVLImageTextImageView* _imageTextImageView;

}

@property (nonatomic,readonly) TVLImageTextImageView * imageTextImageView;              //@synthesize imageTextImageView=_imageTextImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureWithMenuItemElement:(id)arg1 ;
-(TVLImageTextImageView *)imageTextImageView;
@end

