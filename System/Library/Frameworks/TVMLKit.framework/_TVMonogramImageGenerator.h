/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageLoader.h>

@class NSOperationQueue, NSString;

@interface _TVMonogramImageGenerator : NSObject <TVImageLoader> {

	NSOperationQueue* _imageGeneratorQueue;

}

@property (nonatomic,readonly) NSOperationQueue * imageGeneratorQueue;              //@synthesize imageGeneratorQueue=_imageGeneratorQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadImageForURL:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(NSOperationQueue *)imageGeneratorQueue;
-(id)imageKeyForObject:(id)arg1 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end
