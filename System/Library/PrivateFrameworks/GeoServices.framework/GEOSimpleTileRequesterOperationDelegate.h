/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
@required
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;
-(void)operationFinished:(id)arg1;
-(void)operationFailed:(id)arg1 error:(id)arg2;
-(id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;

@end

