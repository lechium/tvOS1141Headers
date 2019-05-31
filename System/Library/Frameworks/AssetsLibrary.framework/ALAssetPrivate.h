/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ALAssetsLibraryAsset.h>

@class ALAssetsLibrary, PLManagedAsset, PLPhotoLibrary, NSString;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {

	ALAssetsLibrary* _library;
	BOOL _isValid;
	PLManagedAsset* _photo;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) PLManagedAsset * photo;                           //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (assign,nonatomic) BOOL isValid;                                     //@synthesize isValid=_isValid - In the implementation block
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PLManagedAsset *)photo;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(BOOL)isDeletable;
-(ALAssetsLibrary *)library;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(void)libraryDidChange;
-(PLPhotoLibrary *)_photoLibrary;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
@end

