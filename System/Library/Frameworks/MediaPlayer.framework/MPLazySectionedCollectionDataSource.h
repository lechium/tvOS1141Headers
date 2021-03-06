/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPLazySectionedCollectionDataSource <NSObject>
@optional
-(id)sectionIndexTitles;
-(NSRange*)optionalSectionIndexTitlesRange;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
-(BOOL)hasSameContentAsDataSource:(id)arg1;

@required
-(id)sectionAtIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1;

@end

