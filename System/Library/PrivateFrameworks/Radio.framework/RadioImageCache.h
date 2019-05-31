/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Radio/Radio-Structs.h>
@class NSOperationQueue;

@interface RadioImageCache : NSObject {

	NSOperationQueue* _imageRequestQueue;

}
+(id)sharedCache;
+(CFURLCacheRef)_sharedCFURLCache;
+(CFURLStorageSessionRef)_newSharedCacheStorageSession;
-(id)init;
-(void)dealloc;
-(id)_init;
-(id)_requestForRadioArtwork:(id)arg1 ;
-(id)_cachedResponseForRequest:(id)arg1 ;
-(id)cachedImageDataForStation:(id)arg1 withExactSize:(CGSize)arg2 MIMEType:(id*)arg3 ;
-(void)loadImageForStation:(id)arg1 withSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeAllCachedImages;
-(id)cachedImageDataForRadioArtwork:(id)arg1 MIMEType:(id*)arg2 ;
-(void)loadImageForRadioArtwork:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

