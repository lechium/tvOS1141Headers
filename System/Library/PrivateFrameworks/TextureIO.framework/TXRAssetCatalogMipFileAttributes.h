/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextureIO/TXRAssetCatalogFileAttributes.h>

@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes {

	unsigned long long _level;
	unsigned long long _face;

}

@property (assign,nonatomic) unsigned long long level;              //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long face; 
-(void)specifyAllFaces;
-(BOOL)doesSpecifyAllFaces;
-(id)init;
-(void)setLevel:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(unsigned long long)face;
-(void)setFace:(unsigned long long)arg1 ;
@end

