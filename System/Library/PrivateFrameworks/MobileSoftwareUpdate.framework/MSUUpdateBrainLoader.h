/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MSUUpdateBrainLoader : NSObject {

	NSDictionary* _attributesDict;

}

@property (retain) NSDictionary * attributesDict;              //@synthesize attributesDict=_attributesDict - In the implementation block
-(BOOL)cancel:(id*)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(NSDictionary *)attributesDict;
-(void)setAttributesDict:(NSDictionary *)arg1 ;
@end

