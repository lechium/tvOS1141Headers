/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@interface OSLogTermDumper : NSObject {

	os_trace_blob_s* _ob;
	unsigned short _last_attrs;
	unsigned char _ob_slop[1];
	int _fd;
	BOOL _fancy;
	unsigned short _cur_attrs;

}

@property (getter=isFancy,nonatomic,readonly) BOOL fancy;                     //@synthesize fancy=_fancy - In the implementation block
@property (assign,nonatomic) unsigned short style;                            //@synthesize cur_attrs=_cur_attrs - In the implementation block
@property (assign,getter=isBold,nonatomic) BOOL bold; 
@property (assign,getter=isOblique,nonatomic) BOOL oblique; 
@property (assign,getter=isUnderlined,nonatomic) BOOL underline; 
@property (assign,nonatomic) unsigned char bgColor; 
@property (assign,nonatomic) unsigned char fgColor; 
-(unsigned char)fgColor;
-(void)setFgColor:(unsigned char)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned short)style;
-(void)setStyle:(unsigned short)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(void)close;
-(BOOL)isBold;
-(BOOL)isUnderlined;
-(BOOL)isOblique;
-(void)setBold:(BOOL)arg1 ;
-(void)setOblique:(BOOL)arg1 ;
-(void)setUnderline:(BOOL)arg1 ;
-(void)resetStyle;
-(id)initWithFd:(int)arg1 forceFancy:(BOOL)arg2 ;
-(void)startPager;
-(void)_flushAttrs;
-(void)write:(const void*)arg1 size:(unsigned long long)arg2 ;
-(void)putc:(int)arg1 ;
-(unsigned)vformat:(const char*)arg1 args:(char*)arg2 ;
-(void)hexdump:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)writeln;
-(void)pad:(int)arg1 count:(unsigned long long)arg2 ;
-(unsigned)format:(const char*)arg1 ;
-(void)puts:(const char*)arg1 ;
-(void)putUUID:(unsigned char)arg1 ;
-(BOOL)isFancy;
-(void)flush:(BOOL)arg1 ;
-(unsigned char)bgColor;
-(void)setBgColor:(unsigned char)arg1 ;
@end
