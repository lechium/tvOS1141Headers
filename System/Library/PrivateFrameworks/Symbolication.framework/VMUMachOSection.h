/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VMUMachOSection : NSObject {

	unsigned long long _localAddress;
	unsigned long long _mappingSize;

}
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 remoteAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(unsigned long long)mappingSize;
-(unsigned long long)localAddress;
@end

