/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/OSLogCoder.h>

@interface LoggingSupport_OSLogCoder : NSObject <OSLogCoder> {

	SCD_Struct_Lo0* _fmt_cmd;
	os_trace_blob_s* _ob;
	os_trace_blob_s* _ob_pub;
	os_trace_blob_s* _ob_priv;
	unsigned long long _maxsz;
	unsigned short _written;
	unsigned short _offset;
	BOOL _truncated;

}
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setTruncated;
-(void)setPublic;
-(void)_setFlags:(unsigned char)arg1 ;
@end

