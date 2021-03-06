/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SiriCoreSQLiteTableConstraint : NSObject <NSCopying> {

	NSString* _name;
	long long _type;
	NSArray* _columnNames;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNames;              //@synthesize columnNames=_columnNames - In the implementation block
+(id)primaryKeyTableConstraintWithName:(id)arg1 columnNames:(id)arg2 ;
+(id)uniqueTableConstraintWithName:(id)arg1 columnNames:(id)arg2 ;
-(NSString *)name;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)columnNames;
-(id)initWithName:(id)arg1 type:(long long)arg2 columnNames:(id)arg3 ;
@end

