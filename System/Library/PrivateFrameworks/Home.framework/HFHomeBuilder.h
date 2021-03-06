/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFWallpaperEditCollectionBuilder;

@interface HFHomeBuilder : HFItemBuilder {

	NSString* _name;
	NSString* _userNotes;
	HFWallpaperEditCollectionBuilder* _wallpaperBuilder;

}

@property (nonatomic,retain) HFWallpaperEditCollectionBuilder * wallpaperBuilder;              //@synthesize wallpaperBuilder=_wallpaperBuilder - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * userNotes;                                               //@synthesize userNotes=_userNotes - In the implementation block
+(Class)homeKitRepresentationClass;
-(void)setHome:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id)performValidation;
-(id)createHome;
-(id)updateName;
-(HFWallpaperEditCollectionBuilder *)wallpaperBuilder;
-(id)updateUserNotes;
-(NSString *)userNotes;
-(void)setUserNotes:(NSString *)arg1 ;
-(void)setWallpaperBuilder:(HFWallpaperEditCollectionBuilder *)arg1 ;
@end

