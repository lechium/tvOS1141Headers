/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class _IDSDatagramChannel, NSArray, IDSDataChannelLinkContext;

@interface IDSDatagramChannel : NSObject {

	_IDSDatagramChannel* _internal;

}

@property (readonly) NSArray * connectedLinks; 
@property (readonly) IDSDataChannelLinkContext * defaultLink; 
-(void)invalidate;
-(void)dealloc;
-(id)description;
-(void)start;
-(void)close;
-(id)initWithSocketDescriptor:(int)arg1 ;
-(void)readDatagramWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendMetadata;
-(void)addNewIDSDataChannelLinkWithAttributes:(char*)arg1 linkAttributesLength:(unsigned short)arg2 ;
-(void)removeIDSDataChannelLinkContext:(char)arg1 linkUUID:(id)arg2 ;
-(void)selectDefaultLink:(char)arg1 ;
-(void)sendMediaEncryptionInfoWithMKM:(id)arg1 MKS:(id)arg2 MKI:(unsigned)arg3 ;
-(void)sendMediaMembershipChangedInfo:(unsigned char)arg1 ;
-(void)processMetadataForDatagram:(char*)arg1 size:(unsigned long long)arg2 datagramInfo:(SCD_Struct_ID6*)arg3 options:(SCD_Struct_ID7*)arg4 ;
-(void)_logReceivingStats:(unsigned long long)arg1 ;
-(void)sendEventConnectedWithDummyLinkInfo;
-(unsigned short)generateMetadata:(char*)arg1 maxSize:(unsigned long long)arg2 withDatagramInfo:(SCD_Struct_ID6)arg3 options:(SCD_Struct_ID7*)arg4 ;
-(void)_logSendingStats:(unsigned long long)arg1 ;
-(void)writeDatagrams:(const void*)arg1 datagramSizes:(unsigned*)arg2 datagramInfo:(SCD_Struct_ID6)arg3 datagramCount:(int)arg4 options:(SCD_Struct_ID7*)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_ID6)arg3 options:(SCD_Struct_ID7*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_setNeedEncryptionInfoPreference:(BOOL)arg1 ;
-(id)cachedMetadata;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_ID6)arg3 options:(SCD_Struct_ID7*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandlerWithOptions:(/*^block*/id)arg1 ;
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)readyToRead;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 flags:(SCD_Struct_ID6)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setChannelPreferences:(id)arg1 ;
-(void)optinStreamIDs:(id)arg1 ;
-(void)optoutStreamIDs:(id)arg1 ;
-(IDSDataChannelLinkContext *)defaultLink;
-(NSArray *)connectedLinks;
-(int)underlyingFileDescriptor;
@end

