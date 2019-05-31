/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetLinkControllerObserver <NSObject>
@optional
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;
-(void)assetLinkController:(id)arg1 didProcessFinishedAsset:(id)arg2;

@required
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;

@end

