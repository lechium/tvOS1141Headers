/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRPClientRequest.h>

@class NSString, NSDictionary, SecureBackup;

@interface SRPInit : NSObject <SRPClientRequest> {

	NSString* _recordLabel;
	NSDictionary* _escrowRecord;
	NSString* _recordID;
	SecureBackup* _sb;

}

@property (nonatomic,copy,readonly) NSString * dsid; 
@property (nonatomic,copy) NSString * recordLabel;                              //@synthesize recordLabel=_recordLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * recoveryPassphrase; 
@property (nonatomic,retain) NSDictionary * escrowRecord;                       //@synthesize escrowRecord=_escrowRecord - In the implementation block
@property (nonatomic,copy) NSString * recordID;                                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain,readonly) SecureBackup * sb;                        //@synthesize sb=_sb - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SecureBackup *)sb;
-(id)validateInput;
-(NSString *)recordLabel;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;
-(id)initWithSecureBackup:(id)arg1 ;
-(void)setRecordLabel:(NSString *)arg1 ;
-(void)setEscrowRecord:(NSDictionary *)arg1 ;
-(NSString *)recordID;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)dsid;
@end
