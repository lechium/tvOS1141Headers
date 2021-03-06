/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIDebugReportFormatter : NSObject {

	unsigned long long _indentLevel;
	NSString* _indentString;
	unsigned long long _extraBodyIndentLevel;

}

@property (assign,nonatomic) unsigned long long indentLevel;                       //@synthesize indentLevel=_indentLevel - In the implementation block
@property (nonatomic,copy) NSString * indentString;                                //@synthesize indentString=_indentString - In the implementation block
@property (assign,nonatomic) unsigned long long extraBodyIndentLevel;              //@synthesize extraBodyIndentLevel=_extraBodyIndentLevel - In the implementation block
+(id)defaultFormatter;
-(id)init;
-(id)stringFromReportComponents:(id)arg1 ;
-(unsigned long long)indentLevel;
-(void)setIndentLevel:(unsigned long long)arg1 ;
-(NSString *)indentString;
-(void)setIndentString:(NSString *)arg1 ;
-(unsigned long long)extraBodyIndentLevel;
-(void)setExtraBodyIndentLevel:(unsigned long long)arg1 ;
@end

