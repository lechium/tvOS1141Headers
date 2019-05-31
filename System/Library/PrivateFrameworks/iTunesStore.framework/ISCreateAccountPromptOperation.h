/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISCreateAccountPromptOperation : ISOperation {

	long long _responseType;
	NSString* _reason;

}

@property (assign,nonatomic) long long responseType;              //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,retain) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(long long)responseType;
-(id)init;
-(NSString *)reason;
-(void)run;
-(id)_newCreateAccountDialog;
-(long long)_mapCorrectSelectedButtonWithDialog:(id)arg1 ;
-(BOOL)_hasActiveICloudAccount;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(void)setResponseType:(long long)arg1 ;
@end
