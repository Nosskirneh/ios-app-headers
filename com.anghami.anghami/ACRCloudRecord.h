//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACRCloudRecWorker, NSString;

@interface ACRCloudRecord : NSObject
{
    struct AQCallbackStruct aqc;
    unsigned int fileFormat;
    ACRCloudRecWorker *_worker;
    NSString *_category;
    unsigned long long _option;
    _Bool _start;
}

@property(nonatomic) _Bool start; // @synthesize start=_start;
@property(readonly, nonatomic) ACRCloudRecWorker *worker; // @synthesize worker=_worker;
@property(nonatomic) struct AQCallbackStruct aqc; // @synthesize aqc;
- (void).cxx_destruct;
- (float)getAveragePower;
- (void)pause;
- (void)stop;
- (void)dealloc;
- (id)initWithWorker:(id)arg1;

@end

