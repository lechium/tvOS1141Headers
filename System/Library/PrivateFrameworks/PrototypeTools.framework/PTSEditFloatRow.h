/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSRow.h>

@interface PTSEditFloatRow : PTSRow {

	unsigned long long _precision;

}

@property (assign,nonatomic) unsigned long long precision;              //@synthesize precision=_precision - In the implementation block
-(id)init;
-(id)precision:(unsigned long long)arg1 ;
-(void)updateWithRow:(id)arg1 ;
-(id)between:(double)arg1 and:(double)arg2 ;
-(Class)rowTableViewCellClass;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
@end
