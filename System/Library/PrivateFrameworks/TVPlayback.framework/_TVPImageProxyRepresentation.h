/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPImageRepresentation.h>

@class TVImageProxy;

@interface _TVPImageProxyRepresentation : TVPImageRepresentation {

	TVImageProxy* _imageProxy;
	CGImageRef _originalImage;

}
-(void)dealloc;
-(id)_originalImageCacheKey;
-(CGImageRef)_originalImage;
-(id)initWithImageProxy:(id)arg1 ;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
@end

