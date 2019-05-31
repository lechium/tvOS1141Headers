/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
@interface TVHSDPAPFace : NSObject {

	unsigned long long _persistentID;
	unsigned long long _nonPersistentID;
	CGRect _fractionalRect;

}

@property (assign,nonatomic) CGRect fractionalRect;                           //@synthesize fractionalRect=_fractionalRect - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;                 //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) unsigned long long nonPersistentID;              //@synthesize nonPersistentID=_nonPersistentID - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(unsigned long long)persistentID;
-(unsigned long long)nonPersistentID;
-(void)setNonPersistentID:(unsigned long long)arg1 ;
-(CGRect)fractionalRect;
-(void)setFractionalRect:(CGRect)arg1 ;
@end
