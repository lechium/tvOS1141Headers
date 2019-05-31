/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSNumber, NSArray;

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (nonatomic,copy) NSNumber * minimumWidth; 
@property (nonatomic,copy) NSNumber * rightMargin; 
@property (nonatomic,copy) NSArray * values; 
+(id)tabularDataColumn;
+(id)tabularDataColumnWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMinimumWidth:(NSNumber *)arg1 ;
-(NSNumber *)minimumWidth;
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(void)setRightMargin:(NSNumber *)arg1 ;
-(NSNumber *)rightMargin;
-(id)encodedClassName;
@end
