/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFSS : NSObject {

	/*^block*/id _capturedStreams;
	/*function pointer*/void* _trustEval;

}
-(id)initWithTrustChallenge:(/*function pointer*/void*)arg1 capture:(/*^block*/id)arg2 ;
-(BOOL)shouldTrust:(SecTrustRef)arg1 ;
-(void)connectionEstablished:(id)arg1 outputStream:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)completeWithError:(id)arg1 ;
@end

