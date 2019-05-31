/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibrary/ALAssetsGroup.h>

@protocol PLAssetContainerList;
@interface ALAssetsGroupList : ALAssetsGroup {

	id<PLAssetContainerList> _containerList;

}

@property (nonatomic,retain,readonly) id<PLAssetContainerList> containerList;              //@synthesize containerList=_containerList - In the implementation block
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(id<PLAssetContainerList>)containerList;
-(id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

