/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NSSQLAttributeExtension <NSObject>
@property (nonatomic,readonly) NSArray * insertSQLStrings; 
@property (nonatomic,readonly) NSArray * dropSQLStrings; 
@property (nonatomic,readonly) NSArray * bulkUpdateSQLStrings; 
@required
-(id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
-(BOOL)isEqualToExtension:(id)arg1;
-(NSArray *)insertSQLStrings;
-(NSArray *)dropSQLStrings;
-(NSArray *)bulkUpdateSQLStrings;
-(BOOL)validate:(id*)arg1;

@end
