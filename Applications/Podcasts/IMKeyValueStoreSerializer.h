//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKeyValueStoreTransaction;

@interface IMKeyValueStoreSerializer : NSObject
{
    IMKeyValueStoreTransaction *_transaction;	// 8 = 0x8
}

@property(retain, nonatomic) IMKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
- (struct MZKeyValueStoreDataVerionPair)objectVersionPairForKey:(id)arg1;	// IMP=0x0000000100080a68
- (id)payloadWithNode:(id)arg1;	// IMP=0x0000000100080a28
- (id)keys;	// IMP=0x000000010008095c
- (id)dataWithNodes:(id)arg1;	// IMP=0x0000000100080880
- (id)baseDictionary;	// IMP=0x0000000100080774
- (_Bool)_isRemoveAllSinceDomainVersion;	// IMP=0x0000000100080718
- (_Bool)_isGetAllSinceDomainVersionRequest;	// IMP=0x00000001000806bc
- (id)sinceDomainVersion;	// IMP=0x00000001000805f0
- (id)payload;	// IMP=0x000000010008035c
- (void)dealloc;	// IMP=0x0000000100080300
- (id)initWithTransaction:(id)arg1;	// IMP=0x0000000100080298

@end
