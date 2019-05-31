/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding> {

	unsigned long long _lastSupportedMessageType;

}

@property (nonatomic,readonly) unsigned long long lastSupportedMessageType;              //@synthesize lastSupportedMessageType=_lastSupportedMessageType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)lastSupportedMessageType;
-(id)initWithLastSupportedMessageType:(unsigned long long)arg1 ;
-(BOOL)isSupported:(unsigned long long)arg1 ;
@end

