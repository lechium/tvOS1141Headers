/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLPTPAssetReader : NSObject {

	NSString* _path;
	id _userInfo;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
-(id)description;
-(id)userInfo;
-(NSString *)path;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
@end

