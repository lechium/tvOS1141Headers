/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA1 : MBDigest {

	CC_SHA1state_st _context;

}
-(id)init;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)final;
@end

