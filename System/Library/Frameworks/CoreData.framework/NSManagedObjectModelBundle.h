/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject {

	NSBundle* _bundle;
	NSDictionary* _versionInfoDictionary;

}
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)optimizedVersionURL;
-(id)currentVersionURL;
-(id)versionInfoDictionary;
-(id)versionHashInfo;
-(id)urlForModelVersionWithName:(id)arg1 ;
-(id)modelVersions;
-(id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)bundle;
-(id)initWithPath:(id)arg1 ;
-(id)currentVersion;
@end

