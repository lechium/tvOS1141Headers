/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@interface CVMLValidationUtilities : NSObject
+(id)arrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 withCountRange:(NSRange)arg4 error:(id*)arg5 ;
+(id)faceObservationFromOptions:(id)arg1 withOptionName:(id)arg2 error:(id*)arg3 ;
+(id)arrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 error:(id*)arg4 ;
+(BOOL)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
@end

