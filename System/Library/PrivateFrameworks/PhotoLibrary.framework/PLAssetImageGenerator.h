/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject {

	BOOL _inUse;
	AVAssetImageGenerator* _imageGenerator;

}

@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;              //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (assign,nonatomic) BOOL inUse;                                          //@synthesize inUse=_inUse - In the implementation block
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)inUse;
-(void)setInUse:(BOOL)arg1 ;
-(AVAssetImageGenerator *)imageGenerator;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
@end
