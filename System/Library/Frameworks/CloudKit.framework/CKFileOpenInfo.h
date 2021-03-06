/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSFileHandle;

@interface CKFileOpenInfo : NSObject <NSSecureCoding> {

	BOOL _shouldReadRawEncryptedData;
	NSString* _UUID;
	NSString* _path;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSFileHandle* _clientOpenedFileHandle;

}

@property (nonatomic,retain) NSString * UUID;                                    //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * path;                                    //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                                  //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                            //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                    //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (nonatomic,retain) NSFileHandle * clientOpenedFileHandle;              //@synthesize clientOpenedFileHandle=_clientOpenedFileHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(NSNumber *)deviceID;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(id)CKPropertiesDescription;
-(NSNumber *)fileID;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(NSFileHandle *)clientOpenedFileHandle;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(BOOL)shouldReadRawEncryptedData;
-(void)setClientOpenedFileHandle:(NSFileHandle *)arg1 ;
@end

