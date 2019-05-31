/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@interface CVMLMPUtils : NSObject
+(double)getHostTime;
+(unsigned long long)getHostTimeInNanos;
+(id)createErrorWithCode:(long long)arg1 andMessage:(id)arg2 ;
+(void)freeVImageBuffer:(vImage_Buffer*)arg1 ;
+(long long)parseExifTimestamp:(id)arg1 ;
@end
