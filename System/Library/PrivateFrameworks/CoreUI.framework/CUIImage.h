/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIImage : NSObject <NSCopying> {

	CGImageRef _cgImage;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
+(id)imageWithCGImage:(CGImageRef)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(CGImageRef)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)cgImage;
@end

