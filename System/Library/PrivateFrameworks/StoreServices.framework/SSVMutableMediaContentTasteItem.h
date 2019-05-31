/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVMediaContentTasteItem.h>

@class NSString;

@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem

@property (assign,nonatomic) unsigned long long contentType; 
@property (nonatomic,copy) NSString * playlistGlobalID; 
@property (assign,nonatomic) long long storeAdamID; 
@property (assign,nonatomic) unsigned long long tasteType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaylistGlobalID:(NSString *)arg1 ;
-(void)setTasteType:(unsigned long long)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(void)setContentType:(unsigned long long)arg1 ;
@end

