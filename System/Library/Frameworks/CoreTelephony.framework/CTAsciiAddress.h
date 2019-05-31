/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CTMessageAddress.h>

@class NSString;

@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress> {

	NSString* _address;

}

@property (readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(id)asciiAddressWithString:(id)arg1 ;
-(id)canonicalFormat;
-(NSString *)address;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(id)encodedString;
@end

