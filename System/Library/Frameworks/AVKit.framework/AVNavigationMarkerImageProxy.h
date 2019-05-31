/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVImageProxyProtocol.h>

@class UIImage, NSString;

@interface AVNavigationMarkerImageProxy : NSObject <AVImageProxyProtocol> {

	BOOL _failed;
	UIImage* _image;
	CGSize _proxySize;

}

@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize proxySize;                      //@synthesize proxySize=_proxySize - In the implementation block
@property (assign,nonatomic) BOOL failed;                           //@synthesize failed=_failed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(CGSize)proxySize;
-(void)setProxySize:(CGSize)arg1 ;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
@end

