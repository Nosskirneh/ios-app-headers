//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DZRAcquisitionLoggerTEMP : NSObject
{
    NSObject<OS_dispatch_queue> *_workingQueue;
}

+ (id)defaultLogger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
- (void).cxx_destruct;
- (void)synchronouslyShootEvent:(id)arg1;
- (void)logUTMsFromDictionary:(id)arg1;
- (void)logAdJustReferrer:(id)arg1;

@end
