/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData;

@interface FMDataArchiver : NSObject {

	BOOL _backedUp;
	BOOL _createDirectories;
	long long _dataProtectionClass;
	NSURL* _fileURL;
	NSData* _unitTestData;

}

@property (nonatomic,retain) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSData * unitTestData;                        //@synthesize unitTestData=_unitTestData - In the implementation block
@property (assign,nonatomic) long long dataProtectionClass;              //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (assign,nonatomic) BOOL backedUp;                              //@synthesize backedUp=_backedUp - In the implementation block
@property (assign,nonatomic) BOOL createDirectories;                     //@synthesize createDirectories=_createDirectories - In the implementation block
+(id)defaultClasses;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(long long)dataProtectionClass;
-(void)setDataProtectionClass:(long long)arg1 ;
-(void)setBackedUp:(BOOL)arg1 ;
-(void)setCreateDirectories:(BOOL)arg1 ;
-(void)setUnitTestData:(NSData *)arg1 ;
-(id)readData:(id*)arg1 class:(Class)arg2 ;
-(id)readDataOfClasses:(id)arg1 error:(id*)arg2 ;
-(id)underlyingDataWithError:(id*)arg1 ;
-(NSData *)unitTestData;
-(id)saveObject:(id)arg1 ;
-(unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1 ;
-(BOOL)backedUp;
-(void)injectUnitTestData:(id)arg1 ;
-(id)readArray:(id*)arg1 ;
-(id)readDictionary:(id*)arg1 ;
-(id)readDictionaryAndClasses:(id)arg1 error:(id*)arg2 ;
-(id)readArrayAndClasses:(id)arg1 error:(id*)arg2 ;
-(id)saveArray:(id)arg1 ;
-(id)saveDictionary:(id)arg1 ;
-(BOOL)saveArray:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)createDirectories;
@end

