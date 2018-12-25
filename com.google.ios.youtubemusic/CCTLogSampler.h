//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClearcutLogTransformer-Protocol.h"

@class CCTClearcutFlags, NSString;

@interface CCTLogSampler : NSObject <CCTClearcutLogTransformer>
{
    CCTClearcutFlags *_flags;
    NSString *_idfv;
}

@property(readonly, nonatomic) NSString *idfv; // @synthesize idfv=_idfv;
@property(readonly, nonatomic) CCTClearcutFlags *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (_Bool)shouldSampleLocally:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithFlags:(id)arg1 idfv:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

