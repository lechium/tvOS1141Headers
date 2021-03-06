/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIRadiositySurface : NSObject {

	IOSurfaceRef _surface;
	CGImageRef _image;
	unsigned long long _bytesPerRow;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
-(CGSize)size;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 ;
-(void*)baseAddress;
-(unsigned long long)bytesPerRow;
-(CGImageRef)CGImage;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(IOSurfaceRef)IOSurface;
@end

