/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKImageLoadParamsOperation.h>

@protocol TVHKContributorImageLoadOperationDelegate;
@class NSURL, NSOperation;

@interface TVHKContributorImageLoadOperation : TVHKImageLoadParamsOperation {

	NSURL* _imageURL;
	id<TVHKContributorImageLoadOperationDelegate> _delegate;
	NSOperation* _imageLoadOperation;

}

@property (nonatomic,copy) NSURL * imageURL;                                                             //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic,__weak) id<TVHKContributorImageLoadOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperation * imageLoadOperation;                                           //@synthesize imageLoadOperation=_imageLoadOperation - In the implementation block
-(void)cancel;
-(id<TVHKContributorImageLoadOperationDelegate>)delegate;
-(void)setDelegate:(id<TVHKContributorImageLoadOperationDelegate>)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)executionDidBegin;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_contributorImageLoadParams;
-(void)_startURLImageLoadOperationWithTemplateURLString:(id)arg1 ;
-(NSOperation *)imageLoadOperation;
-(void)setImageLoadOperation:(NSOperation *)arg1 ;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 delegate:(id)arg4 ;
@end

