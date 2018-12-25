//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSZStreamzService-Protocol.h"

@class GIMMe, GSZInMemoryStreamzService, NSString;

@interface YTGELStreamzService : NSObject <GSZStreamzService>
{
    GSZInMemoryStreamzService *_inMemoryStreamzService;
    _Bool _enabled;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)logWithEventMetricValue:(id)arg1;
- (void)logWithCounterValue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
