/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObjectDeleteRequest.h>

@interface PHAssetDeleteRequest : PHObjectDeleteRequest {

	BOOL _clientEntitledToExpunge;
	long long _operation;

}

@property (assign,nonatomic) long long operation;              //@synthesize operation=_operation - In the implementation block
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
@end

