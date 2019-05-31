/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface TVPScrubImageLoadInfo : NSObject {

	id _loadingToken;
	double _requestedTime;
	double _imageTime;
	UIImage* _image;

}

@property (nonatomic,retain) id loadingToken;                   //@synthesize loadingToken=_loadingToken - In the implementation block
@property (assign,nonatomic) double requestedTime;              //@synthesize requestedTime=_requestedTime - In the implementation block
@property (assign,nonatomic) double imageTime;                  //@synthesize imageTime=_imageTime - In the implementation block
@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(UIImage *)image;
-(double)imageTime;
-(void)setImageTime:(double)arg1 ;
-(double)requestedTime;
-(id)loadingToken;
-(void)setLoadingToken:(id)arg1 ;
-(void)setRequestedTime:(double)arg1 ;
@end

