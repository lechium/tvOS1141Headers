/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface ML3DatabaseTable : NSObject <NSCopying, NSMutableCopying> {

	NSString* _name;
	NSArray* _columns;
	NSArray* _foreignKeyConstraints;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * columns;                            //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) NSArray * foreignKeyConstraints;              //@synthesize foreignKeyConstraints=_foreignKeyConstraints - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)columns;
-(id)_copyWithZone:(NSZone*)arg1 concreteClass:(Class)arg2 ;
-(id)columnDefinitionsSQL;
-(NSArray *)foreignKeyConstraints;
-(id)createTableSQLWithExistenceClause:(BOOL)arg1 ;
@end
