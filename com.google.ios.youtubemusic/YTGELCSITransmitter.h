//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAppStartupInstrumentationTransmitter-Protocol.h"
#import "YTNthThumbnailLoadTransmitter-Protocol.h"

@class GIMMe, NSString;

@interface YTGELCSITransmitter : NSObject <YTAppStartupInstrumentationTransmitter, YTNthThumbnailLoadTransmitter>
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)reportableLatencyInfoWithInfo:(id)arg1;
- (id)constructLatencyBatchWithTicks:(id)arg1 info:(id)arg2 action:(int)arg3;
- (void)reportNthThumbnailLoad:(unsigned long long)arg1 withTicks:(id)arg2;
- (void)reportWithTicks:(id)arg1 info:(id)arg2 action:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

