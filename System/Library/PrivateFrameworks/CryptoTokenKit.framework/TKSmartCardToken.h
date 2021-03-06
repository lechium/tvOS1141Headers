/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKToken.h>

@class NSData, TKSmartCard;

@interface TKSmartCardToken : TKToken {

	NSData* _AID;
	TKSmartCard* _smartCard;

}

@property (readonly) TKSmartCard * smartCard;              //@synthesize smartCard=_smartCard - In the implementation block
@property (readonly) NSData * AID;                         //@synthesize AID=_AID - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)valid;
-(TKSmartCard *)smartCard;
-(NSData *)AID;
-(id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4 ;
@end

