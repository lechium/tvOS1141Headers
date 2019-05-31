/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TLToneImportResponse : NSObject {

	long long _statusCode;
	NSString* _toneIdentifier;

}

@property (nonatomic,readonly) long long statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;              //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
-(id)description;
-(NSString *)toneIdentifier;
-(long long)statusCode;
-(id)initWithStatusCode:(long long)arg1 toneIdentifier:(id)arg2 ;
@end
