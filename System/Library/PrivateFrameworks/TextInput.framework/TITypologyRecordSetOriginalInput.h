/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class NSString;

@interface TITypologyRecordSetOriginalInput : TITypologyRecord {

	NSString* _originalInput;

}

@property (nonatomic,copy) NSString * originalInput;              //@synthesize originalInput=_originalInput - In the implementation block
-(NSString *)originalInput;
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setOriginalInput:(NSString *)arg1 ;
-(id)shortDescription;
@end

