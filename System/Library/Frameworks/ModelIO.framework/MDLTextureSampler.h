/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject {

	MDLTexture* texture;
	MDLTextureFilter* hardwareFilter;
	MDLTransform* transform;

}

@property (nonatomic,retain) MDLTexture * texture; 
@property (nonatomic,retain) MDLTextureFilter * hardwareFilter; 
@property (nonatomic,retain) MDLTransform * transform; 
-(void)setTexture:(MDLTexture *)arg1 ;
-(void)setTransform:(MDLTransform *)arg1 ;
-(MDLTransform *)transform;
-(void)setHardwareFilter:(MDLTextureFilter *)arg1 ;
-(MDLTexture *)texture;
-(MDLTextureFilter *)hardwareFilter;
@end
