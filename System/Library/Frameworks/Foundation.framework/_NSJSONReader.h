/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _NSJSONReader : NSObject {

	id input;
	int kind;
	NSError* error;

}
+(BOOL)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(BOOL)arg3 ;
-(unsigned long long)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned long long*)arg2 ;
-(id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)parseData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)parseStream:(id)arg1 options:(unsigned long long)arg2 ;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

