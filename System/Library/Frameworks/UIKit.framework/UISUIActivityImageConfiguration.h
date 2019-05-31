/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSString;

@interface UISUIActivityImageConfiguration : NSObject <NSSecureCoding> {

	UIImage* _image;
	NSString* _imageCreationBundleIdentifier;
	BOOL _isSettingsVariant;

}

@property (assign,nonatomic) BOOL isSettingsVariant;              //@synthesize isSettingsVariant=_isSettingsVariant - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationWithImageSpecifiedBySpecificImage:(id)arg1 ;
+(id)configurationWithImageSpecifiedByBundleIdentifier:(id)arg1 ;
+(id)configurationWithDefaultImage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)loadedActivityImage;
-(id)initWithImage:(id)arg1 imageCreationBundleIdentifier:(id)arg2 isSettingsVariant:(BOOL)arg3 ;
-(BOOL)isSettingsVariant;
-(void)setIsSettingsVariant:(BOOL)arg1 ;
@end
