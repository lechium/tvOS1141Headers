/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
+(id)_messageForProtectionSpace:(id)arg1 ;
+(id)_titleForProtectionSpace:(id)arg1 ;
-(id)sender;
-(id)password;
-(BOOL)hasPassword;
-(long long)failureCount;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthentication;
-(void)useCredential:(id)arg1 ;
-(id)user;
@end

