/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSEnumerator, NSDictionary, NSString;

@interface SDPParser : NSObject {

	NSArray* _lines;
	NSEnumerator* _lineEnumerator;
	NSDictionary* _fieldNameMap;
	NSString* _fieldName;
	NSString* _fieldValue;
	unsigned char _fieldType;
	BOOL _parsingDone;

}

@property (nonatomic,readonly) NSString * fieldName;                 //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSString * fieldValue;                //@synthesize fieldValue=_fieldValue - In the implementation block
@property (nonatomic,readonly) unsigned char fieldType;              //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,readonly) BOOL parsingDone;                     //@synthesize parsingDone=_parsingDone - In the implementation block
-(NSString *)fieldName;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(unsigned char)fieldType;
-(BOOL)parseMediaLineHeader:(id)arg1 mediaType:(int*)arg2 supportedPayloads:(id)arg3 rtpPort:(int*)arg4 ;
-(BOOL)nextLine;
-(BOOL)parsingDone;
-(int)stringToMediaType:(id)arg1 ;
-(NSString *)fieldValue;
@end
