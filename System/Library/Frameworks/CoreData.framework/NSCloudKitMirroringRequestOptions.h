/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSCloudKitMirroringRequestOptions : NSObject {

	long long _qualityOfService;
	BOOL _allowsCellularAccess;

}

@property (assign,nonatomic) long long qualityOfService;              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;               //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
-(void)applyToOperation:(id)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(id)init;
-(id)copy;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
@end
