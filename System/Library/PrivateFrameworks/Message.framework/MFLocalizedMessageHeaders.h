/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageHeaders.h>

@interface MFLocalizedMessageHeaders : MFMessageHeaders
+(id)localizedHeaders;
+(id)localizedHeadersFromEnglishHeaders:(id)arg1 ;
+(id)englishHeadersFromLocalizedHeaders:(id)arg1 ;
-(id)copyFormattedHeaderValueFromAddressList:(id)arg1 ;
-(void)appendHeaderMarkupForKey:(id)arg1 value:(id)arg2 toString:(id)arg3 ;
-(id)markupString;
@end

