/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDMMCSItemReaderWriterProtocol.h>

@class NSMutableData, CKDMMCSItemGroupContext, CKDMMCSItem, NSString;

@interface CKDMMCSItemFileWriter : NSObject <CKDMMCSItemReaderWriterProtocol> {

	NSMutableData* _data;
	CKDMMCSItemGroupContext* _MMCSRequest;
	CKDMMCSItem* _MMCSItem;

}

@property (nonatomic,retain) CKDMMCSItemGroupContext * MMCSRequest;              //@synthesize MMCSRequest=_MMCSRequest - In the implementation block
@property (nonatomic,retain) CKDMMCSItem * MMCSItem;                             //@synthesize MMCSItem=_MMCSItem - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(CKDMMCSItemGroupContext *)MMCSRequest;
-(CKDMMCSItem *)MMCSItem;
-(BOOL)closeWithError:(id*)arg1 ;
-(id)getFileMetadataWithError:(id*)arg1 ;
-(BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5 ;
-(id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2 ;
-(void)setMMCSRequest:(CKDMMCSItemGroupContext *)arg1 ;
-(void)setMMCSItem:(CKDMMCSItem *)arg1 ;
@end

