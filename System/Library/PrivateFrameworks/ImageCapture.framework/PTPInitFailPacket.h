/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPInitFailPacket : NSObject {

	unsigned _reason;

}
-(id)description;
-(unsigned)reason;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(id)initWithReason:(unsigned)arg1 ;
@end
