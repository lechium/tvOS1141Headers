/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSData;

@interface GEOPNRStringsFileReader : NSObject {

	NSArray* _supportedLanguages;
	NSDictionary* _offsetForLang;
	NSData* _stringsFile;

}

@property (nonatomic,retain,readonly) NSArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * offsetForLang;              //@synthesize offsetForLang=_offsetForLang - In the implementation block
@property (nonatomic,retain,readonly) NSData * stringsFile;                      //@synthesize stringsFile=_stringsFile - In the implementation block
-(id)initWithFile:(id)arg1 ;
-(id)stringForLang:(id)arg1 withId:(unsigned)arg2 ;
-(NSArray *)supportedLanguages;
-(NSDictionary *)offsetForLang;
-(NSData *)stringsFile;
@end

