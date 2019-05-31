/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <UserNotificationsServer/UNSAttachmentData.h>
#import <libobjc.A.dylib/UNSAttachmentThumbnailProvider.h>

@class NSString;

@interface UNSImageAttachmentData : UNSAttachmentData <UNSAttachmentThumbnailProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFileValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)sizeForThumbnailOptions:(id)arg1 ;
-(id)thumbnailPNGOfSize:(CGSize)arg1 forThumbnailOptions:(id)arg2 ;
@end

