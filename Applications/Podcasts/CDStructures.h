//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct IMCloudSyncDataVerionPair {
    id _field1;
    id _field2;
};

struct MZKeyValueStoreDataVerionPair {
    id _field1;
    id _field2;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSMutableSet {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct lineTransformInfo {
    struct CGAffineTransform _field1;
    struct CGAffineTransform _field2;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double snapshotTime;
    double startTime;
    double endTime;
    double duration;
    double elapsedDuration;
    float rate;
    float defaultRate;
    _Bool isLiveContent;
    _Bool isLoading;
} CDStruct_fce57115;

typedef struct {
    double loadFactor;
    long long numberOfHashFunctions;
    long long windowWidth;
} CDStruct_fd921134;

typedef struct {
    int year;
    char month;
    char day;
    char hour;
    char minute;
    double second;
} CDStruct_b0fa4487;

typedef struct {
    long long expectedNumberOfInsertions;
    double loadFactor;
    long long numberOfHashFunctions;
} CDStruct_d703e233;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    CDStruct_d703e233 bloomFilterSpecification;
    long long windowWidth;
} CDStruct_92de0e9e;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;
