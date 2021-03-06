/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSRow.h>

@class NSArray;

@interface PTSChoiceRow : PTSRow {

	NSArray* _possibleValues;
	NSArray* _possibleTitles;
	NSArray* _possibleShortTitles;

}

@property (nonatomic,copy) NSArray * possibleValues;                   //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,copy) NSArray * possibleTitles;                   //@synthesize possibleTitles=_possibleTitles - In the implementation block
@property (nonatomic,copy) NSArray * possibleShortTitles;              //@synthesize possibleShortTitles=_possibleShortTitles - In the implementation block
-(id)init;
-(void)setPossibleTitles:(NSArray *)arg1 ;
-(NSArray *)possibleTitles;
-(id)possibleValues:(id)arg1 titles:(id)arg2 ;
-(NSArray *)possibleValues;
-(void)updateWithRow:(id)arg1 ;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(void)setPossibleShortTitles:(NSArray *)arg1 ;
-(NSArray *)possibleShortTitles;
-(id)possibleShortTitles:(id)arg1 ;
-(Class)rowTableViewCellClass;
@end

