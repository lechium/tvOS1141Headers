/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSIndexSet;


@protocol PLIndexMapperDataSource <NSObject>
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@required
-(NSIndexSet *)filteredIndexes;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1;

@end

