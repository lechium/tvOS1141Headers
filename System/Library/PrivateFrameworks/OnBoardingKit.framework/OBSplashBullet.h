/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OnBoardingKit/OnBoardingKit-Structs.h>
@class NSString, UIImage;

@interface OBSplashBullet : NSObject {

	NSString* _text;
	UIImage* _icon;

}

@property (copy) NSString * text;               //@synthesize text=_text - In the implementation block
@property (retain) UIImage * icon;              //@synthesize icon=_icon - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
@end
